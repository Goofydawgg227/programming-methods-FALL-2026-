#include <stdio.h>

//ex 1.11 any input with many spaces, tabs and new lines would do

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            putchar('\n');
            
        }
        else {
            putchar(c);
        }
    }
}