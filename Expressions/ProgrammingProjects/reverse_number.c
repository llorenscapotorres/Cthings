#include <stdio.h>

int main(void) {
    int number, firstDigit, middleDigit, lastDigit;

    printf("Enter a three-digit number: ");
    scanf("%3d", &number);

    firstDigit = number / 100;
    middleDigit = (number % 100) / 10;
    lastDigit = (number % 100) % 10;

    printf("The reversal is: %1d%1d%1d\n", lastDigit, middleDigit, firstDigit);

    return 0;
}