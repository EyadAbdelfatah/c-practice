#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 100

int main(void) {
    char message[MAX_LEN];
    char *p = message;
    int c;

    printf("Enter a message: ");
    
    while ((c = getchar()) != '\n' && p < message + MAX_LEN) {
        if (isalpha(c)) {
            *p = toupper(c);
            p++;
        }
    }

    char *start = message;
    char *end = p - 1;

    while (start < end) {
        if (*start != *end) {
            printf("Not a palindrome\n");
            return 0;
        }
        start++;
        end--;
    }

    printf("Palindrome\n");
    return 0;
}



