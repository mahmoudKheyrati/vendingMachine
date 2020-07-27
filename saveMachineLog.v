`timescale 1ns / 1ps
/*
00 : buy                    status , productCode , itemCount , price
01 : charge machine         status , productCode , addedCount
10 : recive money           status , amount
11 : change product price   status , procutCode , newPrice

status : error = 0 , pass : 1
*/
module saveMachineLogs(clock, operator, param1, param2, param3, param4);
    input clock, param1;
    input [1:0] operator ;
    input [3:0]  param2, param3, param4;

    integer file;

    initial begin


    end
    always @(posedge clock) begin

        file = $fopen("logs.txt", "a");
        case (operator)
            2'b00: begin
                $fdisplay(file, "buy\t status:%d, productCode:%d , itemCount:%d , price:%d ", param1, param2, param3, param4);
            end
            2'b01: begin
                $fdisplay(file, "chargeMachine\t status:%d, productCode:%d , addedCount:%d", param1, param2, param3);
            end
            2'b10: begin
                $fdisplay(file, "recieveMoney\t status:%d, amount:%d\n", param1, param2);
            end
            2'b11: begin
                $fdisplay(file, "changePrice\t status:%d, productCode:%d , newPrice:%d", param1, param2, param3);
            end

        endcase
        $fclose(file);

    end

endmodule: saveMachineLogs