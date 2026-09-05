#include<stdio.h>
int main()
{
    int s=0,a,b=1,i,n=0;
    printf("Enter the number till where fibonacci series should be printed: ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {


     s=   n+b;
     n=b;
     b=s;

printf("%d\n",s);}
    }