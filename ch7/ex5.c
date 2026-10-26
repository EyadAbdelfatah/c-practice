#include <stdio.h>
#include <ctype.h>

int main(void) {
    int ch;
    int total_value = 0;

    printf("worrrrrd: ");

    while (1) {
        ch = getchar(); 
        
        if (ch == '\n') {
            break; 
        }

        ch = toupper(ch);

        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'L' || ch == 'N' || ch == 'O' || ch == 'R' || ch == 'S' || ch == 'T' || ch == 'U') {
            total_value += 1;
        } 
        else if (ch == 'D' || ch == 'G') {
            total_value += 2;
        } 
        else if (ch == 'B' || ch == 'C' || ch == 'M' || ch == 'P') {
            total_value += 3;
        } 
        else if (ch == 'F' || ch == 'H' || ch == 'V' || ch == 'W' || ch == 'Y') {
            total_value += 4;
        } 
        else if (ch == 'K') {
            total_value += 5;
        } 
        else if (ch == 'J' || ch == 'X') {
            total_value += 8;
        } 
        else if (ch == 'Q' || ch == 'Z') {
            total_value += 10;
        }
    }

    printf("val: %d\n", total_value);

    return 0;
}
