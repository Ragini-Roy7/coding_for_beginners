#include <iostream>
using namespace std;
int main() {
    // * * * *
    // * * *
    // * *
    // * 
    for(int i=4;i>=1;i--) { //for no. of columns , printing in reverse
        for(int j=4;j>i-1;j--) { //for no. of rows, printing in reverse
        cout<< "*";   
        } 
        cout<< endl;
    }
}