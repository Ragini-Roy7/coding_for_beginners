// A 
// B C 
// D E F 
// G H I J
#include <iostream>
using namespace std;
char ch='A';
 int main() {
    for(int i=1;i<=4;i++) {
        for(int j=1;j<=i;j++) {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }

 }