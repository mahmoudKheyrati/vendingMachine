`timescale 1ns/1ps
// only owner can recive money from machine
module recieveMoneyModule(clock, amount, DP);
    input clock;
    input [3:0] amount;

    reg [3:0] amount_;

    wire [3:0] value;
    output reg DP;


    reg getMoneyClock = 0;
    reg cashClock = 0;
    reg logClock = 0;

    reg cashResult;

    reg status;

    getMoney money(.clock(getMoneyClock), .mode(0), .value(value));
    cashHandler handler(.clock(cashClock), .mode(1), .func(1), .amount(amount), .res(cashResult));
    saveMachineLogs log(.clock(logClock), .operator(2'b10), .param1(status), .param2(amount), .param3(4'b0000), .param4(4'b0000));


    always @(posedge clock) begin
        amount_ = amount;
//        $display("recive money : the amount is %b", amount);

        getMoneyClock = 1;
        #100 getMoneyClock = 0;

//        $display("recieve money : the current money : %b" , value);
        // check if amount don't come over the existing in the machine
        if (value < amount) begin
            $display("your machine don't have this money. you can at most recive ");
            $display(value);
            status = 0;
            DP = 1;

        end
        else begin
            // recive money
            // decrease machine money
            cashClock=1;
            #100 cashClock=0;
            #200;
            $display("recive money was successfull");
            $display("recieveMoney : Amount : %b", amount);
            status = 1;
            DP = 0;
        end

        logClock = 1;
        #100 logClock = 0;
    end


endmodule: recieveMoneyModule