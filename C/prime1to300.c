#include <stdio.h>
void main()
{
    int a,b,f=0,i,j;
    for(i=2;i<=300;i++)
    {
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
        printf(" %d",i);
        }
        f=0;
    }
}