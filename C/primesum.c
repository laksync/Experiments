#include<stdio.h>
int main()
{
    int a,g=0,h=0,i,j,f=0,x,y;
    scanf("%d",&a);
    for(i=2;i<a;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                h++;
            }
        }
        for(int k=2;k<a;k++)
        {
            for(int l=2;l<=j;l++)
            {if(k%l==0)
            {
                g++;
                
            }}
            if(h==2&&g==2)
        {
if(i+j==a)
{
    f=1;
    x=i;
    y=j;
    break;
}
        }
            
        g=0;}
h=0;        
    }
    if(f==1)
    {
        printf("The prime numbers that sum up to % d are %d and %d",a,x,y);
    }
    else{
        printf("No two prime numbers sums up");
    }
}