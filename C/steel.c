#include <stdio.h>
#include <stdbool.h>
void main()
{
    int hardness,ten;
    float car;
    bool hr,t,cr;
    printf("Enter the hardness of the material: ");
    scanf(" %d",&hardness);
    printf("Enter the carbon content: ");
    scanf(" %f",&car);
    printf("Enter the tensile strength: ");
    scanf(" %d",&ten);
    hr=hardness>50;
    t=ten>5600;
    cr=car<0.7;
    
    if(hr && t && cr)
    {
        printf("Material is grade 10");
    }
    else if(hr && cr)
    {
        printf("Material is grade 9");
    }
    else if(cr && t)
    {
        printf("Material is grade 8");
    }
    else if(hr && t)
    {
        printf("Material is grade 7");
    }
    else if(hr || cr || t)
    {
        printf("Material is grade 6");
    }
    else
    {
        printf("Material is grade 5");
    }
}