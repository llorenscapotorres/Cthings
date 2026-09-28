#include <stdio.h>

#define PERCENTAGE_FACTOR 100.0f

int main(void) {
    float amount_loan, interest_rate, monthly_payment;

    printf("Enter amount of loan: ");
    scanf("%f", &amount_loan);
    
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    float balance, monthly_interest_rate;

    monthly_interest_rate = (interest_rate / PERCENTAGE_FACTOR) / 12.0f;

    balance = amount_loan * monthly_interest_rate + amount_loan;
    balance = balance - monthly_payment;
    printf("Balance remaining after first payment: $%.2f\n", balance);

    balance = balance - monthly_payment + balance * monthly_interest_rate;
    printf("Balance remaining after second payment: $%.2f\n", balance);

    balance = balance - monthly_payment + balance * monthly_interest_rate;
    printf("Balance remaining after third payment: $%.2f\n", balance);

    return 0;
}