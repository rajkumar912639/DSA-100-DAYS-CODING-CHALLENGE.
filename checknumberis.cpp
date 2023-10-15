#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    if(n<0){
        cout<<"negative number ";
    }
    else if(n>0){
        cout<<"Number is positive ";
    }
    else {
        cout<<"number is zero";
    }
    return 0;
}