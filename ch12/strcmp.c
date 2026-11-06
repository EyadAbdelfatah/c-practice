#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_LEN 100

int main(void) {
    char message[MAX_LEN];
    char reversed[MAX_LEN];
    char *p = message;
    int c;

    printf("Enter a message: ");
    
    while ((c = getchar()) != '\n' && p < message + MAX_LEN) {
        if (isalpha(c)) {
            *p = toupper(c);
            p++;
        }
    }
    *p = '\0'; 

    char *start = message;
    char *end = p - 1;
    char *r = reversed;

    while (end >= start) {
        *r = *end;
        r++;
        end--;
    }
    *r = '\0'; 

    if (strcmp(message, reversed) == 0) {
        printf("Palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }

    return 0;
}




