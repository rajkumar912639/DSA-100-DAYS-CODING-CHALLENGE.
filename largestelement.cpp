#include <iostream>
#include <algorithm> // for max_element function
using namespace std;

int main()
{
    int n; // size of the array
    cin >> n; // input size from user
    int arr[n]; // declare array of size n
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i]; // input array elements from user
    }
    int max = *max_element(arr, arr + n); // find the maximum element using max_element function
    cout << "The maximum element of the array is " << max << endl; // output the maximum element
    return 0;
}
