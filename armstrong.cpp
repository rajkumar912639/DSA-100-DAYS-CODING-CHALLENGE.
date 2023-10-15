#include<iostream>
using namespace std;
int main()
{
    int n =153;
    
    int p=0;
   
    int temp=n;
    while(n>0)
    {
        int rem= n%10;
        p=(p)+(rem*rem*rem);
        n=n/10;
    }
    if(temp==p)
    {
        cout<<" Number is armstrong number ";
    }
    else{
        cout<<"number is not armstrong ";

    }
    return 0;
}