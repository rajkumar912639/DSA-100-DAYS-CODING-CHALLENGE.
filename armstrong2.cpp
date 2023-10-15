#include<iostream>
using namespace std;
int main()
{
    long num, sum = 0, i, n;
    cout << "Enter the number to check Armstrong number: ";
    cin >> num;
    i = num;
    while (num > 0)
    {
        n = num % 10;
        num = num / 10;
        sum = sum + (n * n * n);
    }
    if (sum == i)
    {
        cout << "The number is an Armstrong number";
    }
    else
    {
        cout << "The number is not an Armstrong number";
    }
    return 0;
}
