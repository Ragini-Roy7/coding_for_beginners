// assign specific grade to each mark
#include <iostream>
using namespace std;
int main() {
   int marks_cn; 
   cout << "enter your marks in computer networking : ";
   cin >> marks_cn;
   if(marks_cn <=90 ) {
    cout << "A+"; 
   } 
   else if (marks_cn <80 && marks_cn >90 ) {
    cout << "B"; 
   }
   else {
    cout << "Your mark doesn`t lie between both the grades, work-hard!"; //can also use swithces to do the same
   }
}