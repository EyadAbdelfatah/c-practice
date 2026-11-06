#include <stdio.h>

#define MAX_LEN 100

int main(void) {
    char message[MAX_LEN];
    char *p = message;
    int ch;

    printf("Enter a message: ");
    while ((ch = getchar()) != '\n' && p < message + MAX_LEN) {
        *p++ = (char)ch;
    }

    printf("Reversal is: ");
    for (p--; p >= message; p--) {
        putchar(*p);
    }
    putchar('\n');

    return 0;
}
