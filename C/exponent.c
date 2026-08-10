#include <stdio.h>
int main()
{
    int a,b,i,res=1;
    printf("Enter the number: ");
    scanf("%d",&a);
    printf("Enter the exponent: ");
    scanf("%d",&b);
    for(i=1;i<=b;i++)
    {
        res=res*a;
    }
    printf("%d",res);
    return 0;
}