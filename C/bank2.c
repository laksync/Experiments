#include<stdio.h>
int main()
{
    int N,max=0,i,min,total=0,h=0,trans;
    printf("Enter number of transactions: ");
    scanf("%d",&N);
    printf("Enter transaction amounts:\n");
    for(i=1;i<=N;i++)
    {
        scanf("%d",&trans);
     if(i==1)
     {
        min=trans;
     }
        if(trans>max)
        {
            max=trans;
        }
        if(trans<min)

    {
       min=trans;
    }
    if(trans>50000)
    {
        h++;
    }
    total=total+trans;
    }
    printf("Total Transaction: %d\nHighest Transaction: %d\nLowest Transaction: %d\nHigh-Value Transactions: %d\nAccount status: ",total,max,min,h);
    if(h>3)
    {
        printf("High Transaction Activity");
    }
    else{
        printf("Normal");
    }
}