#include <stdio.h>

int main(void) {
    float x, value;

    printf("Select x to evaluate in 3x5+2x4-5x3-x2+7x-6: ");
    scanf("%f", &x);

    value = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
    printf("Polynomial Value: %.2f\n", value);

    return 0;
}