#include <iostream>
using namespace std;
int main()
{
    int length, breadth, height;
    int volm;
    cout << "enter length of cuboid:";
    cin >> length;
    cout << "enter breadth of cuboid:";
    cin >> breadth;
    cout << "enter height of cuboid:";
    cin >> height;
    volm = length * breadth * height;
    cout << "volume of cuboid:"<<volm;
   
    return 0;
}