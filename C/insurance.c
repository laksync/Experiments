#include <stdio.h>
void main()
{
    int age,max,rate;
    char health,city,sex;
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Enter your health status (e for excellent and p for poor): ");
    scanf(" %c",&health);
    printf("\nWhere do u live (c for city and v for village): ");
    scanf(" %c",&city);
    printf("Enter your sex (M for male and F for female): ");
    scanf(" %c",&sex);
    if(age>25 && age<35){
        if(health=='e'){
        if(city=='c'){
            if(sex=='M')
            {
                printf("The premium is Rs 4 per thousand and the policy amount can not exceed 2 lakh Rs");
            }
            else if(sex=='F')
            {
                printf("The premium is Rs 3 per thousand and the plicy amount can not exceed 1 lakh Rs");
            }
            else {
                printf("Please enter valid sex next time");
            }
        }
        else if(city=='v')
        {
            printf("You are not eligible for policy");          
        }
        else{
            printf("Enter valid residential next time");
        }
        }
       else if(health=='p')
        {
            if(city=='c')
            {
                printf("You are not eligible for policy");
            }
            else if(city=='v')
            {
                if(sex=='M')
                {
                    printf("The premium is Rs 6 per thousand and the policy amount can not exceeed Rs 10000");
                }
                else if(sex=='F')
                {
                    printf("You are not eligible for policy");
                }
                else{
                    printf("Enter valid sex next time");
                }
            }
            else{
                printf("Enter calid residential next time");
            }
        }
        else{
            printf("Enter valid health status next time");
        }
    }
    else{
        printf("You are not eligible for the policy");
    }
}