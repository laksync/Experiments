#include<iostream>
using namespace std;
int main()
{
    int n,count1=0,count2=0,flag,x,y;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        for(int k=1;k<=i;k++)
        {
            if(i%k==0)
            {
                count1++;
            }
        }
        if(count1==2)
        {
            for(int l=1;l<=(n-i);l++)
            {
                if((n-i)%l==0)
                {
                    count2++;
                }
            }
            if(count2==2)
            {
             flag=1;
             x=i;
             y=n-i;
             
            }count2=0;
            
        }
    count1=0;}
    if(flag==1)
    {

    cout<<x<<" and "<<y;
}
    else{
        cout<<"Nuh uh";
    }
}