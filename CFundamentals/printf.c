#include <stdio.h>

int main(void) {
    // Declarations
    int height;
    height = 8;

    int length;
    length = 4;

    float profit;
    profit = 2150.48;

    // Statements
    printf("Height: %d\n", height);
    printf("Porfit: $%f\n", profit); // by default it prints six digits after the decimal point

    printf("Height: %d, Length: %d\nProfit: %.2f\n", height, length, profit);

    return 0;
}