`timescale 1ns/1ps
/*
    mode :
        000 : buy procuts
        001 : charge machine
        010 : recieve money
        011 : show machine logs
        100 : change product price
        101 : show customer moeny
        110 : show machine money
        111 : charge customer money

    other parameters are seven segment nodes

    // we have two seven segment first one show the mode and the other one
       represent the money or something like that
    DP for showing error . if the DP==1 means we have error

*/
module main(mainClock, mode, A, B, C, D, E, F, G, DP, productCode,
    productCount, recieveAmount, newPrice, chargeCustomerAmount,
    customerMoney , machineMoney);
    input mainClock;
    input [2:0] mode;
    input [2:0] productCode;
    input [3:0] productCount, recieveAmount, newPrice, chargeCustomerAmount;
    output wire A, B, C, D, E, F, G, DP;
    output reg [3:0]customerMoney , machineMoney;

    reg isError=0;

    reg modeDisplayClock = 0;

    reg moneyMode;
    wire [3:0] storedMoneyValue;

//    wire [3:0] customerBudget;

    reg [3:0] binaryNumber;
    sevenSegmentDisplay modeDisplay(modeDisplayClock, binaryNumber, isError, A, B, C, D, E, F, G, DP);


    reg buyProductClock, chargeMachineClock, recieveMoneyClock,
        changeProductPriceClock,
        showStoredMoneyClock, chargeCustomerMoneyClock;

    // define modules
    getMoney storedMoney(showStoredMoneyClock, moneyMode, storedMoneyValue);

    buyProductModule buy(buyProductClock, productCode, productCount, isError);
    chargeMachineModule charge(chargeMachineClock, productCode, productCount, isError);
    recieveMoneyModule recieve(recieveMoneyClock, recieveAmount, isError);
    changePriceModule changePrice( changeProductPriceClock, productCode, newPrice);
    cashHandler chargeCustomerMoney(chargeCustomerMoneyClock, 0, 1, chargeCustomerAmount, isError);

    assign DP = isError;
    always @(posedge mainClock) begin

        binaryNumber = mode;
//        $display("mode : %b", mode);
        modeDisplayClock = 1;
        #100 modeDisplayClock = 0;
        case (mode)
            3'b000: begin
                //buy product
                //DP means have error
                //get customer budget
                buyProductClock = 1;
                #100 buyProductClock = 0;

            end
            3'b001: begin
                // charge machine
                chargeMachineClock = 1;
                #100 chargeMachineClock = 0;
            end
            3'b010: begin
                //recive money
                recieveMoneyClock = 1;
                #50 recieveMoneyClock = 0;
            end
            3'b011: begin
                // show logs
                $display("you can read logs in 'logs.txt' file");

            end
            3'b100: begin
                // change price of product
                changeProductPriceClock=1;
                #100 changeProductPriceClock = 0;
            end
            3'b101: begin
                // show customer remading money
                moneyMode = 1;
                showStoredMoneyClock = 1;
                #100 showStoredMoneyClock = 0;
                customerMoney = storedMoneyValue;
                $display("the current customer money is : %d " , storedMoneyValue);
            end
            3'b110: begin
                // show machine money
                moneyMode = 0;
                showStoredMoneyClock = 1;
                #100 showStoredMoneyClock = 0;
                machineMoney = storedMoneyValue;
                $display("the current machine money is : %d " , storedMoneyValue);

            end
            3'b111: begin
                // charge custoemr money
                chargeCustomerMoneyClock =1 ;
                #100 chargeCustomerMoneyClock = 0 ;
            end

        endcase


    end


endmodule: main