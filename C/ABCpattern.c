#include <stdio.h>
void main()
{
    char c;
    int i,j,k,l;
 
    for (i=7;i>=1;i--)
    {
    for(j=65;j<=64 + i;j++)
    {
        printf(" %c",j);
    }
   
    printf("\n");
}}