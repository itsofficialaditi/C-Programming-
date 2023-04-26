#include <stdio.h>

int main() 
 {
    int p, r,t;
    printf("Enter the principal\n");
    scanf("%d",&p);
    printf("Enter the time\n");
    scanf("%d",&t);
    printf("Enter the rate\n");
    scanf("%d",&r);
    int si=(p*r*t)/100;
    printf("The Simple Interest is %d",si);
    return 0;
}