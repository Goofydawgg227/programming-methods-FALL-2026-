#include <stdio.h>
#include<string.h>

//3.4 using an integer that high would cause a interger overflow, int word limit is one less than its negative, you would have to use unsigned int for it to work

void reverse( char s[]){
    
    int c, i, j;
    
    for(i =0, j =strlen(s)- 1; i<j;i++,j--){
        c =s[i];
        s[i] =s[j];
        s[j]=c;
    }
}

void itoa(int n, char s[]){
    
    int i, sign;
    
    if((sign =n) < 0 ){
        n =-n;
    }
    i=0;
    do{
        s[i++] = n % 10 + '0';
    }while ((n/= 10) > 0);
    
    if (sign <0){
        s[i++] = '-';
    }
    s[i] = '\0';
    reverse(s);
}

//3.5
void itob(int n, char s[], int b){
    
    int i, sign;
    
    sign =0;
    i=0;
    
    do {
        int digit = n % b;
        if (digit <0) {
            digit = -digit;
        }
        s[i++] = (digit <=9) ? (digit + '0') : (digit - 10 + 'a');
        
    } while ((n /= b) != 0);
    
    if (sign <0){
        s[i++] = '-';
    }
    s[i] = '\0';
    reverse(s);
}

//3.6
void itoamin(int n, char s[], int min) {
     int i, sign;
    
    if((sign =n) < 0 ){
        n =-n;
    }
    i=0;
    do{
        s[i++] = n % 10 + '0';
    }while ((n /= 10) != 0);
    
    if (sign < 0) {
        s[i++] = '-';
    }
    
    while (i < min) {
        s[i++] = ' ';
    }
    
    s[i] = '\0';
    reverse(s);
}

int main(){
    int i, j;
	char st[10];

	itoa(123,st);
	
	for(int i =0; i<strlen(st);i++){
	    printf("%c",st[i]);
	}
}
