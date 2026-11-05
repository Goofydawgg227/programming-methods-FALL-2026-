#include<stdio.h>

/*
Exercise) trace the execution of the following fragement.5

Int m = 10, n = 5;
// 10 and 5 assigned to m and n

Int *mp, *np;
// pointers initialised

mp= &m; 
np = &np;
pointers *mp and* np point to m and n respectively

*mp= *mp+ *np;
//pointer *mp(dereferencd to 10) is increased by pointer *np(dereferenced to 5) i.e. 10+5 =15

*np = *mp- *np;
//pointer *np(dereferencd to 15) is equal to pointer *mp decreased by pointer *np(dereferenced to 5) i.e. 15 -5 =10

Printf(%d %d \n%d%d\n”, m, *mp, n, *np);
prints out 15, 15, 10, 10

*/

//5.3
char *my_strcat(char *s, const char *t) {
    char *p = s;

    while (*p != '\0') {
        p++;
    }

    while (*t != '\0') {
        *p = *t;
        p++;
        t++;
    }

    *p = '\0';

    return s;
}

//5.4
int strend(char *s, char *t) {
    char *svalue = s;
    char *tvalue = t;

    while (*s != '\0') {
        s++;
    }
    while (*t != '\0') {
        t++;
    }

    while (s >= svalue && t >= tvalue) {
        if (*s != *t) {
            return 0;
        }
        if (t == tvalue) {
            return 1;
        }
        s--;
        t--;
    }

    return 0;
}
