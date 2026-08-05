#include <stdio.h>
void main()
{
    int m=1,i;
    float f,s=0;
    for(i=1;i<=7;i++)
    {
        m=m*i;
        f=(i*1.0)/m;
        s=s+f;

    }
    printf(" %f",s);
}