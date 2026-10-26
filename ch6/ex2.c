
#include <stdio.h>

int main(void)
{
    int m, n, remainder;

    printf("numbahs: ");
    scanf("%d %d", &m, &n);

    while (n != 0)
    {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    printf("gcd: %d", m);

    return 0;
}


