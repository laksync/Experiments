#include<stdio.h>
int main()
{
    int i,N,max=0,min,s=0,curst=0,lst=0,sales;
    float avg;
    printf("Enter the number of days: ");
    scanf("%d",&N);
    
    printf("Enter daily sales: \n");
    for(i=1;i<=N;i++)
    {
        scanf("%d",&sales);
        if(i==1)
        {
            min=sales;
        }
        s=s+sales;
        if(sales>max)
        {
            max=sales;
        }
        if(sales<min)
        {
            min=sales;
        }
        if(sales>50000){
            curst++;
            if(curst>lst)
            {
                lst=curst;
            }
        }
        else{
            curst=0;
        }   

    }avg=(s*1.0)/N;
    printf("Total Sales: %d\nAverage Sales: %d\nHighest Sales: %d\nLowest Sales: %d\nLongest streak above 50k: %d\nTargest Status: ",s,avg,max,min,lst);
    if(s>500000)
    {
        printf("Achieved");
    }
    else
    {
        printf("Not Achieved");
    }

}