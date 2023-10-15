#include<iostream>
using namespace std;
int main()
{
    int n1=0,n2=1;
    int result=0,count=0,n;
    cin>>n;
    while(1)
    {
        result=n1+n2;
        count++;
        if(result>=n)
        {
            break;
        }
        n1=n2;
        n2=result;
        cout<<"Fibnoce no  ["<<count<<"]"<<result;
        cout<<endl;

    }
    return 0;

}