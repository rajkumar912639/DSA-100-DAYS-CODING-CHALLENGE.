#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the first size of triangle :";
    cin>>a,b,c;
    
    if(a+b>c ){
        cout<<"the triangle is ok";
        
    }
    else if(b+c>a){
         cout<<"the triangle is ok";
    }
    else if(c+a>b){
         cout<<"the triangle is ok";
    }
    else{
        cout<<"is not triangle ";
    }
    return 0;
}