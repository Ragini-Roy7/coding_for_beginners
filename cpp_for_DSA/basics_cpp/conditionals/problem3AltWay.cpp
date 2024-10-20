// alternate way to tell whether the point lies within 1,2,3, or 4 quardant
#include <iostream>
using namespace std;
int main()
{
    double real, imaginary; // taking two vars ,1st var is asking for real number and 2nd var is asking for imaginary number
    // imaginary numbers are those numbers which give -ve result when squared
    cout << "enter a real number : " << endl;
    cin >> real;
    cout << "enter an imaginary number : " << endl;
    cin >> imaginary;

    // if imaginary,real number > 0 means its +ve and both numbers are +ve , then quardant ->1
    if (real > 0 && imaginary > 0)
    {
        cout << "The point lies within first quardant " << endl;
    }
    if(real<0 && imaginary>0 ) {
        cout<< "The point lies within second quardant  "<<endl;
    }
    if(real <0 && imaginary < 0) {
        cout << "The point lies within third quardant "<<endl;
    }
    if(real>0 && imaginary<0) {
        cout<< "The point lies within fourth quardant ";
    }
    
}