`timescale 1ns / 1ps
// binary to seven segment display that has error LED
// it implements based on truth table the given in the doc
module sevenSegmentDisplay(clock, binaryNumber, isError, A, B, C, D, E, F, G, DP);
    input clock, isError;
    input [3:0] binaryNumber;
    output reg A, B, C, D, E, F, G,DP;

    always @(posedge clock)begin
        // if we have error dp = 1 means error and vise versa
        DP = isError;

        case (binaryNumber)
            4'b0000: begin    //0
                A = 1;
                B = 1;
                C = 1;
                D = 1;
                E = 1;
                F = 1;
                G = 0;
            end
            4'b0001: begin    //1
                A = 0;
                B = 1;
                C = 1;
                D = 0;
                E = 0;
                F = 0;
                G = 0;
            end
            4'b0010: begin    //2
                A = 1;
                B = 1;
                C = 0;
                D = 1;
                E = 1;
                F = 0;
                G = 1;
            end
            4'b0011: begin    //3
                A = 1;
                B = 1;
                C = 1;
                D = 1;
                E = 0;
                F = 0;
                G = 1;
            end
            4'b1100: begin    //4
                A = 0;
                B = 1;
                C = 0;
                D = 1;
                E = 0;
                F = 1;
                G = 1;
            end
            4'b0101: begin     //5
                A = 1;
                B = 0;
                C = 1;
                D = 1;
                E = 0;
                F = 1;
                G = 1;
            end
            4'b0110: begin    //6
                A = 1;
                B = 0;
                C = 1;
                D = 1;
                E = 1;
                F = 1;
                G = 1;
            end
            4'b0111: begin    //7
                A = 1;
                B = 1;
                C = 1;
                D = 0;
                E = 0;
                F = 1;
                G = 0;
            end
            4'b1000: begin    //8
                A = 1;
                B = 1;
                C = 1;
                D = 1;
                E = 1;
                F = 1;
                G = 1;
            end
            4'b1001: begin    //9
                A = 1;
                B = 1;
                C = 1;
                D = 1;
                E = 0;
                F = 1;
                G = 1;
            end
            4'b1010: begin    //A
                A = 1;
                B = 1;
                C = 1;
                D = 0;
                E = 1;
                F = 1;
                G = 1;
            end
            4'b1011: begin    //b
                A = 0;
                B = 0;
                C = 1;
                D = 1;
                E = 1;
                F = 1;
                G = 1;
            end
            4'b1100: begin    //C
                A = 1;
                B = 0;
                C = 0;
                D = 1;
                E = 1;
                F = 1;
                G = 0;
            end
            4'b1101: begin    //d
                A = 0;
                B = 1;
                C = 1;
                D = 1;
                E = 1;
                F = 0;
                G = 1;
            end
            4'b1110: begin    //E
                A = 1;
                B = 0;
                C = 0;
                D = 1;
                E = 1;
                F = 1;
                G = 1;
            end
            4'b1111: begin    //f
                A = 1;
                B = 0;
                C = 0;
                D = 0;
                E = 1;
                F = 1;
                G = 1;
            end

        endcase
    end

endmodule: sevenSegmentDisplay