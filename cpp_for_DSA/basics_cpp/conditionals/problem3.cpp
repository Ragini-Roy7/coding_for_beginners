// given a point x,y wap to find in which quardant point lies or at origin(0,0)
#include <iostream>
using namespace std;

// 1->++, 2->-+, 3-> --, 4->+-
bool isInFirstQuardant(double real, double imag)
{
    return (real > 0 && imag > 0);
}
int main()
{
    double realPart, imaginaryPart;
    cout << "enter the real part :";
    cin >> realPart;
    cout << "enter the imaginary part : ";
    cin >> imaginaryPart;
    if (isInFirstQuardant(realPart, imaginaryPart))
    {
        cout << "point lies within 1st quardant " << endl;
    }
    else
    {
        cout << "point does not lie within 1st quardant " << endl;
    }
}
