#include <stdio.h>

int main() 
 {
    float height, bmi, weight;
    printf("Enter the height in m \n");
    scanf("%f",&height);
    fflush(stdin);
    printf("Enter the weight in kg \n");
    scanf("%f",&weight);
    fflush(stdin);
    bmi=weight/(height*height);
    printf("The BMI IS %f \n", bmi);
    if(bmi<=18.5)
         printf("Underweight");
    else if(bmi>18.5 && bmi<24.9 )
         printf("Normal Weight");
    else if(bmi>25.0 && bmi<29.9)
         printf("Overweight"); 
    else
         printf("Obesity");         
    return 0;
}