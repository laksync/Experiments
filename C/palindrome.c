#include<stdio.h>
int main()
{
    int a,b=1,c=0,d,temp,rev=0;
    scanf("%d",&a);
    temp=a;
    while(temp>0)
    {
        temp=temp/10;
        c++;
    }
    temp=a;
    for(int l=1;l<c;l++){
    b=  b*10;
    }
    for(int i=1;i<=c;i++)
    {
        d=temp%10;
        temp=temp/10;
        rev=rev+b*d;
        b=b/10;
    }
    if(rev==a)
    {

        printf("Palindrome");
    }
    else{
        printf("Nuh uh");
    }
}