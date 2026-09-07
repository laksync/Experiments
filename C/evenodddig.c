#include<stdio.h>
int main()
{
    int a,b,e=0,o=0,i;
    scanf("%d",&a);
    while(a>0)
    {
        b=a%10;
        a=a/10;
        if(b%2==0)
        {
            e=e+b;
        }
        else{
            o=o+b;
        }

    }
    printf("Even: %d and Odd: %d",e,o);
}