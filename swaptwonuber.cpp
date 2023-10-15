#include<iostream>
using namespace std;
int main()
{
    int n1,n2,temp;
    cout<<"Enter the first number :  ";
    cin>>n1;
    cout<<"Enter the second number : ";
    cin>>n2;
   temp=n1;
   n1=n2;
   n2=temp;
    cout<<"After swapping the numbers "<<n1<<"     "<<n2;
    return 0;
    }
