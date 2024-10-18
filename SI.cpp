// calculte SI
#include <iostream>
using namespace std;
int main() {
    float principal, rate,time, SI;

    cout<<"enter prinicipal of SI :"<<endl;
    cin>> principal;

    cout<<"enter rate of SI :"<<endl; //rate is in %
    cin>>rate;

    cout<<"enter time of SI: "<<endl; //time is in years
    cin>>time;

    SI= (principal*rate*time)/100;
    
    cout << "SI calculated is :"<<SI;
    return 0;

}