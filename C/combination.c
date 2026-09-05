#include <stdio.h>
int main()
{
    int i,j,k,num;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            for(k=1;k<=3;k++)
            {
                num=100*i+10*j+k;
                printf("%d\n",num);
            }
        }
    }
}