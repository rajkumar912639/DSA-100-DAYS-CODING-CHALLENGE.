#include<iostream> // Program to check if a number is a happy number
using namespace std;
int main()
{
    int number, digit, squareSum = 0; // Declare variables
    cout << "Enter the number: "; // Prompt user for input
    cin >> number; // Read input
    while (squareSum != 1 && squareSum != 4) // Repeat until squareSum is 1 or 4
    {
        squareSum = 0; // Reset squareSum to zero
        while (number > 0) // Repeat until number is zero
        {
            digit = number % 10; // Get the last digit of number
            squareSum += (digit * digit); // Add the square of the digit to squareSum
            number = number / 10; // Remove the last digit of number
        }
        number = squareSum; // Assign squareSum to number
    }
    if (squareSum == 1) // If squareSum is 1, the number is happy
    {
        cout << "Happy Number" << endl;
    }
    else // If squareSum is 4, the number is not happy
    {
        cout << "Not Happy Number" << endl;
    }
    return 0;
}
