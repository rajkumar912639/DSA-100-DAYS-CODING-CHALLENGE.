#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<" enter the number to get sum : ";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        sum=sum+i;
        i+=1;
    }
    cout<<sum<<endl;
    return 0;
}