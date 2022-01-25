/*
First Week Lab

Nicolai Kocher
Jan 10, 2022

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //input variables
    float price, cash;

    //prompt for price of item
    printf("Enter Cost of Item:");
    //input for cost of item
    scanf("%f", &price);

    //prompt for cash given
    printf("Enter Amount Tendered:");
    //input for amount tendered
    scanf("%f", &cash);

    //output of change due
    double change_due = cash - price;
    printf("Your change is: %.2f\n", change_due);

    //change rounded
    int nNickles = (int) round(change_due * 20 + 1.0e-6);
    double rChange = nNickles * 0.05 + 1.0e-6;
    printf("Rounded change is: %.2f\n", rChange);

    float twenty_bill = 20;
    int numOfTwentyBill = rChange / twenty_bill;
    //change in 20 dollar bills
    printf("Twenties: %d\n", numOfTwentyBill);
    rChange = rChange - twenty_bill * numOfTwentyBill;

    float ten_bill = 10;
    int numOfTenBill = rChange / ten_bill;
    //change in 10 dollar bills
    printf("Tens: %d\n", numOfTenBill);
    rChange = rChange - ten_bill * numOfTenBill;

    float five_bill = 5;
    int numOfFiveBill = rChange / five_bill;
    //change in 5 dollar bills
    printf("Fives: %d\n", numOfFiveBill);
    rChange = rChange - five_bill * numOfFiveBill;

    float toonie = 2;
    int numOfToonie = rChange / toonie;
    //change in toonies
    printf("Toonies: %d\n", numOfToonie);
    rChange = rChange - toonie * numOfToonie;

    float loonie = 1;
    int numOfLoonie = rChange / loonie;
    //change in loonies
    printf("Loonies: %d\n", numOfLoonie);
    rChange = rChange - loonie * numOfLoonie;

    float quarter = 0.25;
    int numOfQuarter = rChange / quarter;
    //change in quarters
    printf("Quarters: %d\n", numOfQuarter);
    rChange = rChange - quarter * numOfQuarter;

    float dime = 0.1;
    int numOfDime = rChange / dime;
    //change in dimes
    printf("Dimes: %d\n", numOfDime);
    rChange = rChange - dime * numOfDime;

    float nickle = 0.05;
    int numOfNickle = rChange / nickle;
    //change in nickles
    printf("Nickles: %d\n", numOfNickle);
    rChange = rChange - nickle * numOfNickle;

    return 0;
}
