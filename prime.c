#include <stdio.h>

int main()
{int a, b,c,d=0;

    printf("Enter the nth number ");
scanf("%d",&b);
printf("the prime numbers are");
for(a=0;a<=b;a++)
{d=0;
for(c=2;c<a;c++)
{
    if(a%c==0)
    {d++;
    }}
    if(d==0)
{
    printf("\n%d",a);

}}
    return 0;
}