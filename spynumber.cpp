#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,prod=1;
    int d;
    cout<<"Enter the number to check spy number : ";
    cin>>n;
    while(n>0){
        d=n%10;
        sum=sum+d;
        prod=prod*d;
        n=n/10;
    }

    if(sum==prod)
    {
        cout<<"The given Number is spy Number ";

    }
    else{
        cout<<"the given number is not spy Number ";
    }
    return 0;
}