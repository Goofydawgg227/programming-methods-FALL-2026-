#include <stdio.h>

int invert(int x, int p, int n) {
    
    int mask = (~(~0 << n)) << (p + 1 - n);
    
    return x ^ mask;
}