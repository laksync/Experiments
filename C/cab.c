#include<stdio.h>
int main()
{
    int veh,dist,dn,fare,tfare,n;
    char v[50];
    printf("1. Mini\tRs.12/km\n2. Sedan\tRs.18/km\n3. SUV\tRs.25/km\n4. Premium\tRs.35/km\nEnter vehicle type: ");
    scanf("%d",&veh);
    printf("Enter distance:");
    scanf("%d",&dist);
    printf("Enter travel time (1-Day/2-Night): ");
    scanf("%d",&dn);
    printf("Vehicle: ");
    switch(veh){
        case 1:
        printf("Mini");
        fare=12*dist;
        break;
        case 2:
        printf("Sedan");
        fare=18*dist;
        break;
        case 3:
        printf("SUV");
        fare=25*dist;
        break;
        case 4:
        printf("Premium");
        fare=35*dist;
        break;
        default:
        printf("Please enter valid choice");
    }
    if(dn==2)
    {
        tfare=fare+50;
        n=50;
    }
    else{
        tfare=fare;
        n=0;
    }
    printf("\nDistance: %d km\nBase Fare: %d\nNight Surcharge: %d\nTotal Fare: %d",dist,fare,n,tfare);
    
}