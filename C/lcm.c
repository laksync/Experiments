#include<stdio.h>
int main()
{
    int a,l=0,b,max;
    printf("Enter two numbers \n");
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        max=b;
    }
    else{
        max=a;
    }
    for(int i=max;i<=a*b;i++)
    {
            if(i%a==0&&i%b==0)
            {
                l=i;
                break;
            }
    }
    printf("%d",l);
}