#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the numer to check prime or not : ";
    cin>>n;
    if(n%2==0){
        cout<<"is not prime ";
    }
    else if(n%3==0)
    {
        cout<<"is not prime";
    }
    else if(n%5==0)
    {
        cout<<"is not prime";
    }
    else{
        cout<<"is prime";
    }
    return 0;
}