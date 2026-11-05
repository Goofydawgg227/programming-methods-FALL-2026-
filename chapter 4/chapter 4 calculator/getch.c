#include <stdio.h>
 
#define BUFSIZE 100
int bufp = 0;  
char buf[BUFSIZE];  

/*push character back on input*/
void ungetch(int c) {
    if (bufp >= BUFSIZE)
        printf("ungetch: too many characters\n");
    else
        buf[bufp++] = c;
}
/*get a (possibly pushed back) character*/
int getch(void) { return (bufp > 0) ? buf[--bufp] : getchar(); }