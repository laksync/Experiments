#include <stdio.h>
int main()
{
    int a,b=10000,c,d=0,i;
    printf("Enter a 5 digit number ");
    scanf("%d",&a);
    for (i=0;i<5;i++){
        c=a%10;
        a=a/10;
        d=d+b*c;
        b=b/10;
    }
    printf("The reversed number is %d",d);
}