#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<" Enter the character to check :  ";
    cin>>ch;
    if(ch>=65&ch<90)
    {
        cout<<"is capital letter ";
    }
    else if(ch>=97& ch<=122)
    {
        cout<<"is small letter";
    }
    else 
    {
        cout<<"is numeric";
    }
    return 0;
}