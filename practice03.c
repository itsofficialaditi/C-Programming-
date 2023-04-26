#include <stdio.h>

int main() 
 {
    float celsius,farenheit;
    printf("Enter the temperature in celsius\n");
    scanf("%f",&celsius);
    farenheit=(celsius*9/5)+32;
    printf("Temperature in Farenheit is %f",farenheit);
    return 0;
}