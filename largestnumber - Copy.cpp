#include<iostream>
using namespace std;
int main()
{
    int n,i;
    int arr[]={34,56,67,37,98,56,34,98 };
    n = sizeof(arr)/sizeof(arr[0]); // You need to assign the size of the array to n
    int max=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }

    }
    cout<<max;
    return 0;


}
