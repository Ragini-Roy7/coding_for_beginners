#include <iostream>
using namespace std;
int main()
{
    int num;
    int rev_num = 0, r;

    while (num != 0)
    {
        r = num % 10;  // to get its remainder module op is used
        rev_num = rev_num * 10 + r; // 0*10 + 6(ex) =6 means  remainder
        num = num / 10;    // for quoitent ,div op used
    }
    cout << "reversed num is : " << rev_num;
    return 0;
}