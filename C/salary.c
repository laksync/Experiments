#include <stdio.h>
int main(){
    int bas;
    float gross,ha,da;
    printf("Enter your basic salary ");
    scanf("%d",&bas);
    da=0.4*bas;
    ha=0.2*bas;
    gross=bas+ha+da;
    printf("The dearness allowance is %f and house allowance is %f and the  gross salary is %f",da,ha,gross);
}