#include<iostream>
using namespace std;
int main(){
    int count=0,a;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        cout<<"prime";
    }
else{
    cout<<"not prime";
}
}