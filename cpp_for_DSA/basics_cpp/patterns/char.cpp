// a b c d 
// e f g h 
// i j k l
// m n o p
#include <iostream>
using namespace std;
char ch='a';
int main() {
    for(int i=1;i<=4;i++) {
        // char ch='a';
        for(int j=1;j<=4;j++) {
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    // cout<<"no after printing pattern : "<< ch;
}