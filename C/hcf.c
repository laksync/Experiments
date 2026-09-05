#include<stdio.h>
int main()
{
    int a,b,max=0,hf=0;
    printf("Enter the numbers\n");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        max=a;
    }
    else{
        max=b;
    }
    for(int i=1;i<max;i++)
    {
        if(a%i==0&&b%i==0)
        {
            hf=i;
           
        }
    }
    printf("%d",hf);

}