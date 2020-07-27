`timescale 1ns/1ps
/*
    mode :
           00 : charge - by the owner of machine
           01 : buy    - by the customer
           10 : update product price

// productNumber : value[10:8]
// count         : value[7:4]
// price         : value [3:0]
*/
module storeHandler(clock, mode, productCode, itemCount, newPrice);
    input clock;
    input [1:0] mode;
    input [2:0] productCode;
    input [3:0] itemCount, newPrice;


    reg [4:0] existingCount, currentPrice;
    wire [10:0] p0, p1, p2, p3, p4;

    reg writeClock = 0;
    reg readClock = 0;

   
    reg [10:0] p0_, p1_ , p2_ , p3_ , p4_;
 readStuff loadedItems(
        .clock(readClock),
        .p0(p0),
        .p1(p1),
        .p2(p2),
        .p3(p3),
        .p4(p4)
    );

    writeStuff write(
        .clock(writeClock),
        .p0(p0_),
        .p1(p1_),
        .p2(p2_),
        .p3(p3_),
        .p4(p4_)
    );

    initial begin
        readClock = 1;
        #10 readClock = 0;
    end
    always @(posedge clock) begin
        readClock = 1;
        #100 readClock = 0;

//        $display("in the mode : %b " , mode);


        p0_ = p0;
        p1_ = p1;
        p2_ = p2;
        p3_ = p3;
        p4_ = p4;

        case (mode)
            2'b00: begin
                // charge : increase productCount
//                $display("in machine charge mode");
                case (productCode)
                    3'b000: begin
                        if (p0[7:4]+itemCount > 15) begin
                            $display("you can't charge this number because you come over max capacity of the machine (15 per each product)");
                        end
                        else begin
                               p0_[7:4] = p0[7:4]+itemCount;
                        end
                    end
                    3'b001: begin
                        if (p1[7:4]+itemCount > 15) begin
                            $display("you can't charge this number because you come over max capacity of the machine (15 per each product)");
                        end
                        else begin
                            p1_[7:4] = p1[7:4]+itemCount;
                        end
                    end
                    3'b010: begin
                        if (p2[7:4]+itemCount > 15) begin
                            $display("you can't charge this number because you come over max capacity of the machine (15 per each product)");
                        end
                        else begin
                            p2_[7:4] = p2[7:4]+itemCount;
                        end
                    end
                    3'b011: begin
                        if (p3[7:4]+itemCount > 15) begin
                            $display("you can't charge this number because you come over max capacity of the machine (15 per each product)");
                        end
                        else begin
                            p3_[7:4] = p3[7:4]+itemCount;
                        end
                    end
                    3'b100: begin
                        if (p4[7:4]+itemCount > 15) begin
                            $display("you can't charge this number because you come over max capacity of the machine (15 per each product)");
                        end
                        else begin
                            p4_[7:4] = p4[7:4]+itemCount;
                        end
                    end
                endcase

            end
            2'b01: begin
//                $display("in buy mode " );
                // buy : decrease productCount
                case (productCode)
                    3'b000: begin
                        if (p0[7:4]-itemCount < 0) begin
                            $display("you can't dp this operation becuase the machine has't this item.");
                        end
                        else begin
                            p0_[7:4] = p0[7:4]-itemCount;
                        end
                    end
                    3'b001: begin
                        if (p1[7:4]-itemCount < 0) begin
                            $display("you can't dp this operation becuase the machine has't this item.");
                        end
                        else begin
                            p1_[7:4] = p1[7:4]-itemCount;
                        end
                    end
                    3'b010: begin
                        if (p2[7:4]-itemCount < 0) begin
                            $display("you can't dp this operation becuase the machine has't this item.");
                        end
                        else begin
                            p2_[7:4] = p2[7:4]-itemCount;
                        end
                    end
                    3'b011: begin
                        if (p3[7:4]-itemCount < 0) begin
                            $display("you can't dp this operation becuase the machine has't this item.");
                        end
                        else begin
                            p3_[7:4] = p3[7:4]-itemCount;
                        end
                    end
                    3'b100: begin
                        if (p4[7:4]-itemCount < 0) begin
                            $display("you can't dp this operation becuase the machine has't this item.");
                        end
                        else begin
                            p4_[7:4] = p4[7:4]-itemCount;
                        end
                    end
                endcase
            end
            2'b10: begin
//                $display("in update price mode");

                // update price of product
                case (productCode)
                    3'b000: begin
                        if (newPrice > 15) begin
                            $display("you can't set the pricce over 15");
                        end
                        else begin
                            p0_[3:0] = newPrice;
                        end
                    end
                    3'b001: begin
                        if (newPrice > 15) begin
                            $display("you can't set the pricce over 15");
                        end
                        else begin
                            p1_[3:0] = newPrice;
                        end
                    end
                    3'b010: begin
                        if (newPrice > 15) begin
                            $display("you can't set the pricce over 15");
                        end
                        else begin
                            p2_[3:0] = newPrice;
                        end
                    end
                    3'b011: begin
                        if (newPrice > 15) begin
                            $display("you can't set the pricce over 15");
                        end
                        else begin
                            p3_[3:0] = newPrice;
                        end
                    end
                    3'b100: begin
                        if (newPrice > 15) begin
                            $display("you can't set the pricce over 15");
                        end
                        else begin
                            p4_[3:0] = newPrice;
                        end
                    end
                endcase
            end
        endcase


        writeClock = 1;
        #100 writeClock = 0;

        readClock = 1 ;
        #100 readClock = 0 ;


    end



endmodule: storeHandler