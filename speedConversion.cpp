#include <iostream>
using namespace std;
int main()
{

    int speed_km_hr;
    float speed_ms; // float for more precise div

    cout << "Enter speed in km/hr: ";
    cin >> speed_km_hr;

    // Convert km/hr to m/s
    speed_ms = speed_km_hr * 5.0 / 18.0;

    cout << "Speed in m/s: " << speed_ms << endl;
}