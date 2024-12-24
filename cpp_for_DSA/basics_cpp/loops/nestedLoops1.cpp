#include <iostream>
using namespace std;
int main()
{
    int rows=4;
   
    for (int i = 0; i < 4; i++) //4 rows hogi
    {
        for (int j = 0; j < i+1; j++) //4 cols hogi
        {
            cout << i+1; 
        }
      
        cout << endl;
    }
}
