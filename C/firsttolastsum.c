#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter a 4digit number ");
    scanf("%d",&a);
    b=a%10;
    c=a/1000;
    d=b+c;
    printf("The sum of last and first digit is %d",d);
}