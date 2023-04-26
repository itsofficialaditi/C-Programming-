#include <stdio.h>
int main()
{
    char a;
    char b;
    printf("Enter value of a \n");
    scanf("%c",&a);
    fflush(stdin);
    printf("Enter value of b \n");
    scanf("%c",&b);
    fflush(stdin);
    printf("Value of a is %c\n ", a);
    printf("Value of b is %c\n ", b);
   return 0;
}