#include<stdio.h>
int main()
{
    int a,b,i,max;
    scanf("%d",&a);
    max=a%10;
    while(a>0)
    {
        b=a%10;
        a=a/10;
        if(b>max)
        {
            max=b;
        }
        
    }
    printf("%d",max);
}