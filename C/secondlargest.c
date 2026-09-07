    #include<stdio.h>
    int main()
    {
        int max,sec=0,a,i,temp,c=0;
        scanf("%d",&a);
        max=0;
        
        while(a>0)
        {
                i=a%10;
                if(i>max)
                {
                    temp=max;
                    max=i;
                    sec=temp;    
                }
                else if(i > sec && i != max)
{   
    sec = i;
}
                a=a/10;
                
        }
        printf("%d",sec);
    }