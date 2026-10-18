#include <stdio.h>

int main(void) {
    float amount, total;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    total = amount * 1.05f;

    printf("With tax added: $%.2f\n", total);

    return 0;
}