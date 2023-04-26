#include <stdio.h>

int main() 
 {
    int a, b,c,d,sm=0,i;
     printf("Enter a number\n");
    scanf("%d", &a);
    printf("Enter a number\n");
    scanf("%d", &b);
    printf("Enter a number\n");
    scanf("%d", &c);
    printf("Enter a number\n");
    scanf("%d", &d);
   if(sm<a)
    sm=a;
    if(sm<b)
    sm=b;
    if(sm<c)
    sm=c;
    if(sm<d)
    sm=d;
    printf("The greatest number is %d \n",sm);    return 0;
}