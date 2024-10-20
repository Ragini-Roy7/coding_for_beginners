// to divisible by 3 n 5
#include <iostream>
using namespace std;
int main() {
    int num;
    cout<<"enter a num: ";
    cin>>num;
    if(num % 5 ==0 && num % 3 ==0) {
        cout<< num<<"is divisible by both 3 and 5";
    }
    else if(num % 3 ==0) {
        cout<< num <<"is only divisible by 3";
    }
    else {
        cout << num << "is not divisible by 3 and 5 or by only 3";
    }
}