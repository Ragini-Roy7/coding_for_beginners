#include <iostream>
using namespace std;
int main()
{
    float temp_cel; // degree celcius
    cout << "Enter degree in celcius: ";
    cin >> temp_cel;

    float temp_fahrenheit;

    temp_fahrenheit = (temp_cel * 9.0 / 5.0) + 32;

    cout << "degree in farenheit: "<<temp_fahrenheit;
    
}