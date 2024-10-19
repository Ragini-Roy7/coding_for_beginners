#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float principal, annual_rate, interest_Compounded, time;

    cout << "enter principal for calc CI: " << endl;
    cin >> principal;
    cout << "enter annual_rate for calc CI: " << endl;
    cin >> annual_rate;
    cout << "enter no. of times interest coompounded: " << endl;
    cin >> interest_Compounded;

    annual_rate = annual_rate / 100;
    // convert percentage to decimal

     float amount = principal * pow((1 + annual_rate / interest_Compounded), interest_Compounded * time);

   

    cout << "compound interest : " << interest_Compounded << endl;
    cout << "total amount :" << amount << endl;
}