#include <iostream>
using namespace std;
int main() {
    // int radius;
    // float circumference;
    // cout<<3.14*radius*radius <<circumference;
    
    //  int side;
    // int volume;
    // cout << "enter side of cube:" << endl;
    // cin >> side;
    // volume= side*side*side;
    // cout << "volume is :" << volume << endl;
    float radii;
    float circumference;
    
    cout << "Enter radius of circle: ";
    cin >> radii;
    
    circumference = 2 * 3.14 * radii;
    cout << "Circumference of circle: " << circumference << endl;
   
    return 0;
}