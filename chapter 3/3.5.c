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