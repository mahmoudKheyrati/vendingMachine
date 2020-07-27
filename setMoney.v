`timescale 1ns / 1ps
/*
    mode :
          0 means machine money
          1 means customer money
*/
module setMoney(clock, mode, value);
    input clock, mode;
    input [3:0] value;

    integer file, binary;

    always @(posedge clock) begin
        if (mode == 0) begin
            // get machine money
            file = $fopen("savedMachineMoney.txt", "w");
            $fdisplay(file, "%b", value);
        end
        else begin
            // get user money
            file = $fopen("customerMoney.txt", "w");
            $fdisplay(file, "%b", value);
        end
        $fclose(file);
    end
endmodule: setMoney