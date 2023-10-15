#include<iostream>
using namespace std;
int main()
{
    int n;
    int x=1,y=n/2;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=y;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=x;k++)
        {
            cout<<(char)(i+64);
            
        }
        cout<<endl;
        if(x<=n/2)
        {
            x++;
            y--;
        }
        else
        {
            y--;
            x++;
        }
        

    }
    return 0;
}