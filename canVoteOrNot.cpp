// take age from user and tell can they vote or not 
#include <iostream>
using namespace std;
int main() {
    int age; 
    cout << "enter your age : ";
    cin >> age; 
    if(age <=18) {
        cout << "you can vote!";
    }
    else {
        cout << "you can not vote!";
    }
}