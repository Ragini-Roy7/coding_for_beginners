// A 
// B B 
// C C C 
// D D D D 
// E E E E 
#include <iostream>
using namespace std;

int main() {
    for(int i=0;i<5;i++) {
        char ch='a'+i;
        for(int j=0;j<=i;j++) {
            cout<<ch;
            
        }
        cout<<endl;
    }
}