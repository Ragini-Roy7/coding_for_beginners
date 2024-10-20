// to ask int from user and print its absolute 
#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "enter your num : ";
    cin>>num;
    if(num >=0 ) {
        cout << "absolute of a num is : "<<num;
    }
   else if(num<=0) {
    cout << "absolute of a num is : "<< -num;
   }
   
}