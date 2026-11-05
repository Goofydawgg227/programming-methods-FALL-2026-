
#include <stdio.h>

int main()
{
    int fahr, celsius;
    int lower, upper, step;
    
    lower =0;
    upper = 300;
    step = 20;
    
    celsius = upper;
    printf("\t Celsius to Fahrenheit \n");
    while(celsius >= lower){
        fahr = (9.0 * (celsius / 5.0)) + 32;
        printf("%d \t\t %d \n", celsius, fahr);
        celsius = celsius - step;
    }

}
