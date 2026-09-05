#include<stdio.h>
int main()
{
    int a,b,c,d,s=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    for(b=1;b<a;b++)
    {
        if(a%b==0)
        {
            s=s+b;
        }
    }
    if(s==a)
    {
        printf("Perfect number");
    }
    else{
        printf("Not a perfect number");
    }
}