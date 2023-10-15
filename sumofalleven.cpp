#include<iostream>
using namespace std;
int main()
{
     int n,sum=0,i=2;
     cout<<"Enter the  to get sum : ";
     cin>>n;
     while(i<=n)
     {
     sum=sum+i;
         i+=2;
            }
     cout<<sum<<endl;
     return 0;
}