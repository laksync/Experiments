#include <stdio.h>
int main()
{
    int dist;
    float m,f,i,c;
    printf("Enter the distance in km ");
    scanf("%d",&dist);
    m=dist*1000;
    f=dist*3280.84;
    i=f*12.5;
    c=m*100;
    printf("The distance in:-\nmeters : %f\nfeet : %f\ninches : %f\ncentimeters : %f",m,f,i,c);
}