#include <stdio.h>

int main() {
    int c;
    int prev = 0;

    while ((c = getchar()) != EOF) {
        if (c != ' ') {
            putchar(c);
            prev = 0;
        }
        else if (prev == 0) {
            putchar(c);
            prev = 1;
        }
    }
}