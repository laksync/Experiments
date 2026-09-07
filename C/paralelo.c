#include<stdio.h>
int main()
{
    int i,j,k=5,l,p=11,q=11;
    for(i=1;i<=11;i+=2)
    {
        for(l=1;l<=k;l++)
        {
            printf(" ");
        }
        while(p>=1)
        {
            printf("*");
        p--;
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        q-=2;
        p=q;
        k--;printf("\n");
    }
}