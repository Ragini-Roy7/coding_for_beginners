// to check for uppercase,lowercase,numeric
#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "enter character :" << endl;
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Uppercase letter" << endl;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "Lowercase letter" << endl;
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "Numeric digit" << endl;
    }
    else
    {
        cout << "Special character" << endl;
    }
}