#include <iostream>
using namespace std;
int main()
{
    float base;
    float height;
    float res;
    cout<<"enter base of triangle"<<endl;
    cin>>base;
    // In C++, the expression 1/2 performs integer division, which results in 0 instead of 0.5
    cout<<"enter height of triangle"<<endl;
    cin>>height;
    cout<<"Base:"<<base <<endl <<"Height :"<<height<<endl;
    res= 0.5*base*height;
    cout<<"area of triangle is "<<res<<endl;
    return 0;
}