#include <stdio.h>
int main()
{
    int y;
    float i,x;
    printf("y\tx\t\ti\n");
    for(y=1;y<=6;y++)
    {
        for(x=5.5;x<=12.5;x=x+0.5)
        {
            i=2.0+(y*1.0+0.5*x);
            printf("%d\t%f\t%f\n",y,x,i);
        }
    }
}