#include <stdio.h>
int main(){
    float c,f;
    printf("Enter the temperature in farenheits ");
    scanf("%f",&f);
    c=(f- 32.0) * 5.0/9.0;
    printf("The temperature in celcius is %f",c);
}