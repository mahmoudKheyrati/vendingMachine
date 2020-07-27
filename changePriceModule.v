`timescale 1ns/1ps
module changePriceModule(clock, productCode, newPrice);
    input clock;
    input [2:0] productCode;
    input [3:0] newPrice;


    reg changeClock = 0;

    reg status;
    reg logClock = 0;

    // check if the product code valid or not
    storeHandler store(.clock(changeClock), .mode(2'b10), .productCode(productCode), .itemCount(4'b0000), .newPrice(newPrice));
    saveMachineLogs log(.clock(logClock), .operator(2'b11), .param1(status), .param2(productCode), .param3(newPrice));
    always @(posedge clock) begin
        if (productCode < 3'b101) begin
            changeClock = 1;
            // check if the sum of product don't come over 15
            // charge product
            #100 changeClock = 0;
            status = 1;

        end
        else begin
            $display("please enter the valid product code (0-4)");
            status = 0;
        end

        logClock = 1;
        #100 logClock = 0;

    end


endmodule: changePriceModule