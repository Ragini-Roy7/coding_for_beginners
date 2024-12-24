// - - - 1 |
// - - 1  2| 1
// -  1   2| 2  1
// 1  2 3 4| 3   2  1

#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {     // for spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
       // for numbers in 1st set of tri pattern 
        for (int j = 1; j <= i + 1; j++)
        { 
            cout << j<< " " ;
        }
        //for numbers in 2nd set of tri pattern
        for (int j = i; j >0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}