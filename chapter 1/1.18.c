#include <stdio.h>

int main() {
    int c;
    int prev = 0;

    while ((c = getchar()) != EOF) {
        if(prev == c){
            break;
        }
        if (c != ' '&& c != '\t'&& c != '\n') {
            putchar(c);
            prev = 0;
        }else{
            prev = c;
        }
    }
}