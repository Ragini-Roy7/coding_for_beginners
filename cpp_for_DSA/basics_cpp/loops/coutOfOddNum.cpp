#include <iostream>
using namespace std;

int main()
{
     int sum = 0, n;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) { // Check if the number is even
            sum += i; // Add the even number to the sum
        }
    }

    cout << "Sum of odd numbers from 1 to " << n << " is: " << sum << endl;
   
}