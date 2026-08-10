#include <stdio.h>
int main(){
    int a,i,j,f,d,s;
   for(i=1;i<=500;i++)
    {a=i;
s=0;
    for(j=1;j<=3;j++)
        {
            d=a%10;
            a=a/10;
            f=d*d*d;
            s=s+f;
        }
        if(s==i)
        {
            printf("%d\n",i);
        }

    }   
}
