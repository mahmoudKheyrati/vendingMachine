`timescale 1ns/1ps

module main_TEST;

    // Inputs
    reg mainClock;
    reg [3:0] mode;
    wire A;
    wire B;
    wire C;
    wire D;
    wire E;
    wire F;
    wire G;
    wire DP;
    reg [2:0] productCode;
    reg [3:0] productCount;
    reg [3:0] recieveAmount;
    reg [3:0] newPrice;
    reg [3:0] chargeCustomerAmount;
    wire [3:0] customerMoney, machineMoney;

    // Instantiate the Unit Under Test (UUT)
    main uut(
        .mainClock(mainClock),
        .mode(mode),
        .A(A),
        .B(B),
        .C(C),
        .D(D),
        .E(E),
        .F(F),
        .G(G),
        .DP(DP),
        .productCode(productCode),
        .productCount(productCount),
        .recieveAmount(recieveAmount),
        .newPrice(newPrice),
        .chargeCustomerAmount(chargeCustomerAmount),
        .customerMoney(customerMoney),
        .machineMoney(machineMoney)
    );

    initial begin
        // Initialize Inputs
        mainClock = 0;
        mode = 0;

        productCode = 0;
        productCount = 0;
        recieveAmount = 0;
        newPrice = 0;
        chargeCustomerAmount = 0;

        // Wait 100 ns for global reset to finish
        #100;
        mode = 0;
        //buy
        productCode =3'b000 ;
        productCount = 1;
        mainClock = 1;
        #100;
        mainClock = 0;

        #100;
        mainClock=1;
        #100 ;
        mainClock =0;



        #100;
        mode = 1;
        // charge machine
        productCode = 4;
        productCount=7;
        mainClock = 1;
        #100;
        mainClock = 0;
        #100;
        mode = 2;
        // recive money from machine by the owner
        recieveAmount = 10;
        mainClock = 1;
        #100;
        mainClock = 0;
        #100;
        mode = 3;
        // show logs
        mainClock = 1;
        #100;
        mainClock = 0;
        #100;
        mode = 4;
        // change product price
        productCode = 4;
        newPrice=15;
        mainClock = 1;
        #100;
        mainClock = 0;
        #100;
        mode = 5;
        // show user money
        mainClock = 1;
        #100;
        mainClock = 0;
        #100;
        mode = 6;
        // show machine money
        mainClock = 1;
        #100;
        mainClock = 0;
        #100;
        mode = 7;
        //charge customer money
        chargeCustomerAmount = 10;
        mainClock = 1;
        #100;
        mainClock = 0;


        // Add stimulus here

    end

endmodule: main_TEST

