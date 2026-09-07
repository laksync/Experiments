#include<stdio.h>
int main()
{
    int a,b=1,i,k;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(k=1;k<=i;k++)
        {
            b=b*k;
        }
        for(int j=1;j<=i;j++)
        {
            printf("%d ",b);

        
        }printf("\n");b=1;
    }
}
