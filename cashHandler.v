`timescale 1ns/1ps
/*
mode :
       0 : customer
       1 : machine with func 0 means increase machine money
           and func 1 means recieve money from machine
func :
       00 : purchase
       01 : charge

*/

// NOTE : cash handler don't have validation so
//        you should check vallidations before calling cashHandler module


module cashHandler(clock, mode, func, amount, res);
    input clock, mode, func;
    input [3:0] amount;
    output reg res;

    reg [3:0] value;
    wire [3:0] current;
    reg moneyClock = 0;
    reg setMoenyClock = 0;


    reg modeReg =0 ;

    getMoney money(.clock(moneyClock), .mode(modeReg), .value(current));
    setMoney sMoney(.clock(setMoenyClock), .mode(modeReg), .value(value));


    always @(posedge clock) begin

        // get how much money that user has


        if (mode == 0) begin
            moneyClock = 1;
            assign modeReg = 1;
            assign value = current;
            #100 moneyClock = 0;
//            $display("current money value : %d" , current);
//            $display("value : %d" , value);
//            $display("cash : amount : %b",amount);

            // customer
            if (func == 0) begin
                // purchase
                if (value < amount) res = 0;
                else begin
//                    $display("in purchase");
                    setMoenyClock = 1;
                    assign value = value-amount;
                    #100 setMoenyClock = 0;
                    res = 1;
                end

            end
            else begin
                //charge
//                $display("in charge ");
                if(amount+value < 16 )begin
                    setMoenyClock = 1;
                    assign modeReg = 1;
                    assign value = amount+value;
                    #100 setMoenyClock = 0;
                    res = 1;
                end
                else begin
                    $display("you can't charge this amount of money (maximum of the money is 15)");
                    res=0;
                end
            end

        end
        else begin
            // machine
            // increase machine money
//            $display("in increasse money");
            moneyClock = 1;
            assign modeReg = 0;
            assign value = current;
            #100 moneyClock = 0;
//            $display("M current money value : %d" , current);
//            $display("M value : %d" , value);


            if (func == 0) begin
                setMoenyClock = 1;
                assign value = value+amount;
                #100 setMoenyClock = 0;
                res = 1;
//                $display("increas money bor %b", value);
            end
            else if (func == 1) begin
                // recive money from machine
//                $display("recive money with func ==1 ");
//                $display("data - value : %b - amount : %b , value-amount = %b", value,amount,value-amount);
                setMoenyClock = 1;
                assign value = value-amount;
                #100 setMoenyClock = 0;
                res = 1;
            end
        end

//        $display("**** VALUE : %d" , value);

    end


endmodule: cashHandler