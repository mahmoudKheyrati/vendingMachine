`timescale 1ns/1ps
module chargeMachineModule(clock, productCode, productCount, DP);
    input clock;
    input [2:0] productCode;
    input [3:0] productCount;

    output reg DP;

    reg chargeClock = 0;
    reg status = 0;
    reg logClock = 0;

    // check if the product code valid or not
    storeHandler store(.clock(chargeClock), .mode(2'b00), .productCode(productCode), .itemCount(productCount), .newPrice(4'b0000));
    saveMachineLogs log(.clock(logClock), .operator(2'b01), .param1(status), .param2(productCode), .param3(productCount), .param4(4'b0000));
    always @(posedge clock) begin
//        $display("the product code is : %b" , productCode);
        if (productCode < 3'b101) begin
            chargeClock = 1;
            // check if the sum of product don't come over 15
            // charge product
            #100 chargeClock = 0;
            status = 1;
            DP = 0;

        end
        else begin
            $display("please enter the valid product code (0-4)");
            status = 0;
            DP = 1;
        end
        logClock = 1;
        #100 logClock = 0;
    end


endmodule: chargeMachineModule