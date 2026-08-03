#include <stdio.h>
int main(){
    int a,sum=0,i,b=10,c;
    printf("Enter the 5 digit number\n");
    scanf("%d",&a);
    for(i=1;i<6;i++)
    {
        c=a%10;
        a=a/10;
        sum=sum+c;
      
    }
    printf("The sum of the digits is %d",sum);
}