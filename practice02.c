#include <stdio.h>

int main() 
 {
    int r;
    printf("Enter your rating\n");
    scanf("%d",&r);
    for(int i=0;i<r;i++)
    {
        printf("*");
    }
    return 0;
}