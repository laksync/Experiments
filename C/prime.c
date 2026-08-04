#include <stdio.h>
void main()
{
    int a,f=0,i;
    printf("Enter a number: ");
    scanf("%d",&a);
    for(i=2;i<=a/2;i++)
    {
    if(a%i==0){
        f=1;
        break;
    }
    else{
        continue;
    }
    }
    if(f==0){
        printf("The number entered is prime");
    }
    else{
        printf("The number entered is not prime");
    }
}