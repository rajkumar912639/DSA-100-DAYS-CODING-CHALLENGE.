#include <iostream>
using namespace std;

int main() {

   int n,num,digit,temp,temp2,res,rev=0;
   cout<<" Enter the number : ";
   cin>>n;
   temp=n;
   while(n>0)
   {
digit=n%10;

rev=(rev*10)+digit;
n=n/10;

   }
   
if(rev==temp)
{
    cout<<"number is Palendrome ";
}
else
{
    cout<<"number is not palendrome ";

}
    return 0;
}