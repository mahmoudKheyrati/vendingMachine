`timescale 1ns / 1ps

//$display("no : %i , count: %i , price: %i ", value[10:8], value[7:4], value[3:0]);
// productNumber : value[10:8]
// count         : value[7:4]
// price         : value [3:0]

module readStuff(clock, p0, p1, p2, p3, p4);
    input clock;
    output reg [10:0] p0, p1, p2, p3, p4;

    integer file, binary;



    always @(posedge clock) begin
        file = $fopen("stuff.txt", "r");
        binary = $fscanf(file, "%b\n%b\n%b\n%b\n%b\n", p0, p1, p2, p3, p4);
        $fclose(file);
    end


endmodule: readStuff