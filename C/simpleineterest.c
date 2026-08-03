#include <stdio.h>
int main(){
int p,n;
float r,si;
printf("Enter Principle\n");
scanf("%d",&p);
printf("Enter the years the money will be persisted\n");
scanf("%d",&n);
printf("Enter the rate\n");
scanf("%f",&r);
si=(p*r*n)/100;
printf("Simple Interest is calculated to be %f",si);
}