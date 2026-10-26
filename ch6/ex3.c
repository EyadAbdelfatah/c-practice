
#include <stdio.h>

int main(void)
{
    int numerator, denominator;
    int m, n, remainder;
    int gcd;

    printf("frahhhhhhhhhh: ");
    scanf("%d/%d", &numerator, &denominator);

    m = numerator;
    n = denominator;

    while (n != 0)
    {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    gcd = m;

    numerator = numerator / gcd;
    denominator = denominator / gcd;

    printf("red: %d/%d\n", numerator, denominator);

    return 0;
}
