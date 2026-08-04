#include <stdio.h>
void main()
{
    int y;
    printf("Enter a year: ");
    scanf("%d",&y);
    if (y%4==0)
    {
        if(y%100==0)
        {
            if(y%400==0){
                printf("year is leap year");
            }
            else{
                printf("year is not leap year");
            }
        }
        else
    {
        printf("year is leap year");
    }
    }
    else{
        printf("year is not a leap year");
    }
}