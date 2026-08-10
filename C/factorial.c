#include <stdio.h>
int main()
{
    int i,a,f=1;
    printf("Enter the number for factorial calculation: ");
    scanf("%d",&a);
    for (i=1;i<=a;i++)
    {
        f=f*i;
    }
printf("The factorial of %d is %d",a,f);
}