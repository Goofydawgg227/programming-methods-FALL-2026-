#include <stdio.h>

int rightrot(int x, int n) {
    int word = sizeof(int) * 8;
    
    n = n % word;
    
    if (n == 0) {
        return x;
    }
    
    return (x >> n) | (x << (word - n));
}