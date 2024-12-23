// 1 2 3 4 -> 
// 1 2*2 3*3 4*4
// 1 4 9 16
#include <iostream>
using namespace std;
int main() {
    for(int i=1;i<=4;i++) {
        for(int j=1;j<=4;j++) {
            cout<< j*j <<" ";
        }
        cout<<endl;
    }
}