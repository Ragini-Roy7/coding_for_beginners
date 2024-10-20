// to check if num is 3-digit numb
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter a num : ";
    cin >> num;
    if (num >= 100 && num <= 999)

    {
        cout << num << "is three digit number" << endl;
    }
    else
    {
        cout << num << "is not a three digit number " << endl;
    }
}