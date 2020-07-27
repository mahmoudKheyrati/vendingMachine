`timescale 1ns/1ps
/*
        module major:
                    the customer can buy item via this module
*/

module buyProductModule(clock, itemCode, itemCount, DP);

    input clock;
    input [2:0] itemCode;
    input [3:0] itemCount;
    output reg  DP;

    reg [3:0] customerBudget, itemPrice;
    reg [4:0] mostItemToBuy;

    wire [10:0] p0, p1, p2, p3, p4;

    reg [3:0] basketAmountPrice;
    reg errorType = 1'b0;

    wire cashResult;

    reg status;
    reg storeClock = 0;
    reg logClock = 0;

    reg getMoneyClock, getProductPriceClock, decreaseClock, increaseClock;

    getMoney money(clock, mode, customerBudget);
    readStuff getProductPrice(getProductPriceClock, p0, p1, p2, p3, p4);
    cashHandler handler(.clock(decreaseClock), .mode(0), .func(0), .amount(basketAmountPrice), .res(cashResult));
    cashHandler savedMoney(.clock(increaseClock),.mode(1), .func(0), .amount(basketAmountPrice), .res(cashResult));
    storeHandler store(.clock(storeClock), .mode(2'b01), .productCode(itemCode), .itemCount(itemCount), .newPrice(4'b00));

    saveMachineLogs log(.clock(logClock), .operator(2'b00), .param1(status), .param2(itemCode), .param3(itemCount), .param4(itemPrice));


    always @(posedge clock) begin

        // find Custoemr budget
        getMoneyClock = 1;
        #50 getMoneyClock = 0;

        // get product base price
        getProductPriceClock = 1;
        #50 getProductPriceClock = 0;


        case (itemCode)
            3'b000: itemPrice = p0[3:0];
            3'b001: itemPrice = p1[3:0];
            3'b010: itemPrice = p2[3:0];
            3'b011: itemPrice = p3[3:0];
            3'b100: itemPrice = p4[3:0];
        endcase
//        $display("the item price is : %b" , itemPrice);
        basketAmountPrice = itemCount*itemPrice;
//        $display("item count : %b" , itemCount);
//        $display("price of your whole basket is : %d ", basketAmountPrice);

        if(itemCode<5) begin
            if (basketAmountPrice > customerBudget) begin
                // the customer can't buy this item show the correct output

                mostItemToBuy = customerBudget%itemPrice;
                if (itemPrice > customerBudget) begin
                    $display("you can't buy this product even 1 item");
                    errorType = 1'b0;
                end
                else begin
                    $display("you can't buy this procut at this count you can at most buy ");
                    $display(mostItemToBuy);
                    $display("of this product");
                    errorType = 1'b1;
                end

                $display("your purchase canceled! ");
                status = 0;

                DP = 1;
            end
            else begin
                // the customer budget is enough to buy this product with this count

                // decrease customer budget
                decreaseClock = 1;
                #100 decreaseClock = 0;

                // increase machine money
                #100;
                increaseClock = 1;
                #100 increaseClock = 0;

                // update list of products
                storeClock = 1;
                #100 storeClock = 0;

                $display("thanks for buying , give your product! ");
                $display("good luck ");

                status = 1;


                DP = 0;
            end
        end
        else begin
            $display("you can't buy this product! product code in the range of (0-4)");
            $display("please select correct product code.");
            DP=1;
            status=0;
        end



        // save logs
        logClock = 1;
        #100 logClock = 0;
    end


endmodule: buyProductModule