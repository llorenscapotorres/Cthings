#include <stdio.h>

#define BILL_20 20
#define BILL_10 10
#define BILL_5 5
#define BILL_1 1

int main(void) {
    int amount;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    int num_bills_20;
    num_bills_20 = amount / BILL_20;
    amount = amount - num_bills_20 * BILL_20;

    int num_bills_10;
    num_bills_10 = amount / BILL_10;
    amount = amount - num_bills_10 * BILL_10;

    int num_bills_5;
    num_bills_5 = amount / BILL_5;
    amount = amount - num_bills_5 * BILL_5;

    int num_bills_1;
    num_bills_1 = amount / BILL_1;

    printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d\n", 
        num_bills_20, num_bills_10, num_bills_5, num_bills_1);
    
    return 0;
}