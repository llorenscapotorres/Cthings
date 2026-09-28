#include <stdio.h>

#define TAX_ADDED 5.0f

int main(void) {
    float amount, taxed_amount;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    taxed_amount = (TAX_ADDED / 100.0f) * amount + amount;
    printf("With tax added: $%.2f\n", taxed_amount);
    
    return 0;
}