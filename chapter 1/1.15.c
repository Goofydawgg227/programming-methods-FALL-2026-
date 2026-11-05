#include <stdio.h>

int conversion(int *celsius, int *fahr, int *step){
    *celsius = 5 * (*fahr - 32)/9;
    printf("%d \t\t %d \n", *fahr, *celsius);
    *fahr = *fahr + *step;
    
    return 0;
}

int main()
{
    int fahr, celsius;
    int lower, upper, step;
    
    lower =0;
    upper = 300;
    step = 20;
    
    fahr =0;
    printf("\t Fahrenheit to celsius \n");
    while(fahr <= upper){
        conversion(&celsius, &fahr, &step);
    }
    

}
