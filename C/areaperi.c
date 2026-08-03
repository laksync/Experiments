#include <stdio.h>
int main(){
    
    float a,p,l,b,r,ac,cir;
    printf("Enter the length of the rectangle ");
    scanf("%f",&l);
    printf("Enter the breadth of the rectangle ");
    scanf("%f",&b);
    printf("Enter the radius of the circle ");
    scanf("%f",&r);
    a=l*b;
    p=2*l+2*b;
    ac=3.14*r*r;
    cir=2*3.14*r;
    printf("The area of the rectanlge is %f, the perimeter of the rectangle is %f, the area of the circle is %f and the circumference of the circle is %f",a,p,ac,cir);
    

}