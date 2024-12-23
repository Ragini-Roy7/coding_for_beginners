#include <iostream>
using namespace std;
//  a b c d
//  a b c
//  a b 
//  a
int main() {
    // for(int i=1;i<=5;i++ ) { //for no. of rows
    // char ch='A';
    //    for(int j=1;j<=5;j++) {
    //     cout<<ch;
    //     ch=ch+1;
    //    }
    //    cout<<endl;
    // } 
    // char ch='a';
    for(int i=1;i<4;i++) {//for rows 
         char ch='A';//char ko wapas se reset kar rhe hain A 
        for(int j=1;j<4;j++) { //for columns
            ch=ch+1; //char ko increment kar rhe hain then printing it.
            cout<<ch;
        }
        cout<<endl;
    }
}