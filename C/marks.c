#include <stdio.h>
int main(){
    int a,b,c,d,e;
    float per,avg;
    printf("Enter your marks in 5 subjects:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    avg=(a+b+c+d+e)/5;
    per=(a+b+c+d+e)/5;
    printf("The average marks are %f and the overall percentage is %f",avg,per);
}