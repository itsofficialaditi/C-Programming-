#include <stdio.h>

int main() 
 {int y;
    printf("Enter the year\n");
    scanf("%d",&y);
    if((y%4==0)&&(y%100!=0))
      printf("Leap Year\n");
else if(y%100==0)
        {
            if(y%400==0)
            printf("Leap Year\n");
            else
            printf("Not Leap Year");
        }
        else
            printf("Not Leap Year");
    return 0;
}