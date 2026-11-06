#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 100

int main(void) {
    char message[MAX_LEN];
    char *p = message, *q;
    int c;  

    printf("Enter a message: ");
    
    while ((c = getchar()) != '\n' && p < message + MAX_LEN) {
        if (isalpha(c)) {
            *p = toupper(c);
            p++;
        }
    }

    q = p - 1;     
    p = message;   

    while (p < q) {
        if (*p != *q) {
            printf("Not a palindrome\n");
            return 0;
        }
        p++;
        q--;
    }

    printf("Palindrome\n");
    return 0;
}
