// if 1<= n <=9 then print lowercase english alphabets to the number eg:1 for one, 2 for two ...
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter a num :" << endl;
    cin >> num;
    if (num == 1)
    {
        cout << "one";
    }
    else if (num == 2)
    {
        cout << "two";
    }
    else if (num == 3)
    {
        cout << "three";
    }
    else if (num == 4)
    {
        cout << "four";
    }
    else if (num == 5)
    {
        cout << "five";
    }
    else if (num == 6)
    {
        cout << "six";
    }
    else if (num == 7)
    {
        cout << "seven";
    }
    else if (num == 8)
    {
        cout << "eight";
    }
    else
    {
        cout << "nine";
    }
}