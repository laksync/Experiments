#include <stdio.h>
int main(){
    int a,i,c=0,temp,ar=0,r,d=1,b;
    scanf("%d",&a);
    temp=a;
    while(temp>0)
    {
        temp=temp/10;
        c++;
    }
  
    temp=a;
while(a > 0)
{
    r = a % 10;
    b = 1;

    for(i = 1; i <= c; i++)
    {
        b = b * r;
    }

    ar = ar + b;
    a = a / 10;
}
    if(ar==temp)
    {
        printf("Armstrong");
    }
    else{
        printf("Nuh uh");
    }
}
