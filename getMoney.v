`timescale 1ns / 1ps

/*
    mode :
          0 means machine money
          1 means customer money
*/
module getMoney(clock , mode, value);
    input clock , mode;
    output reg [3:0] value;

    integer file , binary ;

    always @(posedge clock) begin
        if(mode == 0 ) begin
            // get machine money
            file = $fopen("savedMachineMoney.txt","r");
            binary = $fscanf(file,"%b",value);
        end
        else begin
            // get user money
            file = $fopen("customerMoney.txt","r");
            binary = $fscanf(file,"%b",value);
        end
        $fclose(file);
    end
endmodule : getMoney