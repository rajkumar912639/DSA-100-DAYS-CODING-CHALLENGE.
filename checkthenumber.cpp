#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the value :  ";
    cin>>a;
    if(a>0){
        cout<<"a is positive Number ";
    }
    else if(a<0)
    {
        cout<<" is negative number ";
    }
    else{
        cout<<" is equal to zero";
    }
    return 0;
}