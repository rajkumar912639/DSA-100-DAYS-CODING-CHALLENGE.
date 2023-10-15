#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<" Enter the number : ";
    cin>>n;
    int i=2;
    while(i<n)
    {
        if(i%n==0)
        {
            cout<<"prime not prime for : "<<i<<endl;
        }
        else{
            cout<<"prime for "<<i<<endl;
        }
        i+=1;
    }
}