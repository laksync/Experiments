#include <stdio.h>
int main()
{
    char c;
    int i,j,k,l;
 k=0;
    for (i=7;i>=1;i--)
    {
    for(j=65;j<=64 + i;j++)
    {
        printf(" %c",j);
    }
    for(l=0;l<=k;l++)
    {
        printf(" ");
    }
   for(k=70;k>=72-i;k--)
   {
    printf(" %c",k);
   }
    printf("\n");
    k++;
}
return 0;
}