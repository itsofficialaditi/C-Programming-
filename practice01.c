#include <stdio.h>

int main() 
 {
    int r;
    printf("Enter your rating\n");
    scanf("%d",&r);
    switch(r)
    {
        case 1:
        printf("*");
        break;
        case 2:
        printf("**");
        break;
        case 3:
        printf("***");
        break;
        case 4:
        printf("****");
        break;
        case 5:
        printf("*****");
        break;
        default:
        printf("Wring Input");

    }
    return 0;
}