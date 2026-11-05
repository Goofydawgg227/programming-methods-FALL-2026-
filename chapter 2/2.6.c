#include <stdio.h>

int setbits(int x, int p, int n, int y) {
    int mask = ~(~0 << n);
    
    int x_mask = ~(mask << (p + 1 - n));
    
    return (x & x_mask) | ((y & mask) << (p + 1 - n));
}