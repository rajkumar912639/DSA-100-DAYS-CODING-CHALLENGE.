#include<iostream>
using namespace std;
int main()
{
    int n,i,temp,rev=0; 
    cin>>n;
    temp=n; 
    for(i=0;i<n;i++)
    {
        rev=rev*10+temp%10; 
        temp=temp/10; 
        if(temp==0) 
        {
            break;
        }
    }
    if(rev==n) 
    {
        cout<<"number is palindrome ";
    }
    else{
        cout<<" number is not palindrome ";
    }
    return 0;
}
