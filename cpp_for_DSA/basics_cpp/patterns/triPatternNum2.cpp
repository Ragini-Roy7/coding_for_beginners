// 1
// 1 2
// 1 2 3
// 1 2 3 4
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = i+1; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}