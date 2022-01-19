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
    double R_change = (change_due / 0.05) * 0.05;
    printf("Rounded change is: %.2f\n", R_change);

    float twenty_bill = 20;
    int numOfTwentyBill = change_due / twenty_bill;
    //change in 20 dollar bills
    printf("Twenties: %d\n", numOfTwentyBill);
    change_due = change_due - twenty_bill * numOfTwentyBill;

    float ten_bill = 10;
    int numOfTenBill = change_due / ten_bill;
    //change in 10 dollar bills
    printf("Tens: %d\n", numOfTenBill);
    change_due = change_due - ten_bill * numOfTenBill;

    float five_bill = 5;
    int numOfFiveBill = change_due / five_bill;
    //change in 5 dollar bills
    printf("Fives: %d\n", numOfFiveBill);
    change_due = change_due - five_bill * numOfFiveBill;

    float toonie = 2;
    int numOfToonie = change_due / toonie;
    //change in toonies
    printf("Toonies: %d\n", numOfToonie);
    change_due = change_due - toonie * numOfToonie;

    float loonie = 1;
    int numOfLoonie = change_due / loonie;
    //change in loonies
    printf("Loonies: %d\n", numOfLoonie);
    change_due = change_due - loonie * numOfLoonie;

    float quarter = 0.25;
    int numOfQuarter = change_due / quarter;
    //change in quarters
    printf("Quarters: %d\n", numOfQuarter);
    change_due = change_due - quarter * numOfQuarter;

    float dime = 0.1;
    int numOfDime = change_due / dime;
    //change in dimes
    printf("Dimes: %d\n", numOfDime);
    change_due = change_due - dime * numOfDime;

    float nickle = 0.05;
    int numOfNickle = change_due / nickle;
    //change in nickles
    printf("Nickles: %d\n", numOfNickle);
    change_due = change_due - nickle * numOfNickle;

    return 0;
}
