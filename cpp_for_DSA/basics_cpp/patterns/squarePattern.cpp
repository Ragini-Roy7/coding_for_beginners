// this is most crucial and logical chapter for logic building practice problems like never before
#include <iostream>
using namespace std;
int main() {
    // 1 2 3 4
    // 1 2 3 4 
    // 1 2 3 4
    // 1 2 3 4
    // outer loop tells how many iteration of lines required
    // inner loop tells how many no. in a row we want to print
    for(int i=1;i<=5;i++) { 
        for(int j=1;j<=5;j++) {
            cout<< j;
        }
        cout<<endl;
    }

}