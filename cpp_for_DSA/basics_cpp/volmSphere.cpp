#include <iostream>
using namespace std;

int main()
{
    float pi = 3.14, radius;
    float volume;

    cout << "Enter radius of sphere: " << endl;
    cin >> radius;

    volume = (4.0 / 3) * pi * radius * radius * radius;
    cout << "Volume of the sphere: " << volume << endl;
}