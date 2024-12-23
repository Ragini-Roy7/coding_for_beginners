// 1 2 3 4 5
// 1 4 9 16 25
// 1 16 81 259 625
#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout<< pow(j,i)<<" ";
        }
        cout<<endl;
    }
}
