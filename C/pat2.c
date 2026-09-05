#include<stdio.h>
int main()
{
    int i,j,k=4,l;
    for(i=1;i<=5;i++)
    {
        for(l=1;l<=k;l++)
        {printf(" ");}
        for(j=1;j<=i;j++)
        {
            printf("*");
        }k--;printf("\n");
    }
}