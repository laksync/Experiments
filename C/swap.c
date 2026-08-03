#include <stdio.h>
int main(){
    int C,D,s;
    printf("Enter two numbers C and D in order \n");
    scanf("%d%d",&C,&D);
    s=C;
    C=D;
    D=s;
    printf("Now the value of C is %d and the value of D is %d",C,D);
}