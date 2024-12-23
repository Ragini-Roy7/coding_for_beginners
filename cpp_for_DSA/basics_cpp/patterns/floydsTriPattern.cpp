// 1 
// 2 3
// 4 5 6
// 7 8 9 10
#include <iostream>
using namespace std;
int num=1;
int main(){
    for(int i=1;i<5;i++) {
        for(int j=1;j<i+1;j++) {
            cout<<num << " ";
            num++;
        }
        cout<<endl;
    }
}