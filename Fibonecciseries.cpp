#include<iostream>
using namespace std;
int main()
{
    int n1=0;
    int n2=1;
    int num,result,count=0;
    cout<<"Enter the any number ";
    cin>>num;
    while(1)
    {
        result=n1+n2;
        count++;
        if(result>=num){
            break;
        }
        n1=n2;
        n2=result;
        cout<<"fibonecci series ["<<count<<"]"<<result;
    }
    return 0;

}