#include<stdio.h>
int main()
{
    int i,j,k=1,l;
    for(i=1;i<=5;i++)
    {
        for(l=5;l>=k;l--){printf(" ");}
        for(j=1;j<=i;j++){
            printf("%d",j);
        }printf("\n");k++;
    }
}