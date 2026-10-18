#include <stdio.h>
//3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
int main(void) {
    float x, result;

    printf("x=: ");
    scanf("%f", &x);

    result = (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (x * x) + (7 * x) - 6;

    printf("result: %.2f\n", result);

    return 0;
}