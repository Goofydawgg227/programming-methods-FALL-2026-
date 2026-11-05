#include<stdio.h>

int strindex(char s[], char t[]) {
    int i, j, k;
    
    int found = -1;
    
    for(i = 0; s[i] != '\0'; i++) {
        for(j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
        ;
        if (k > 0 && t[k] == '\0')
            found = i;
    }
    return found;
}

int main(){
    char s[] = "abcdedfabcde", t[] = "abc";
    //rightmost index = 7
    
    printf("%d",strindex(s,t));
    
}