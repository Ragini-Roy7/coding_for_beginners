// to check total  marks of 5 random subjects and %
#include <iostream>
using namespace std;
int main()
{
    float total_score = 500.0;

    float marks_computers, marks_os, marks_cn, marks_maths, marks_eng;

    cout << "enter your score in computer fundamentals : ";
    cin >> marks_computers;
    cout << "enter your score in operating system : ";
    cin >> marks_os;
    cout << "enter your score in  computer networking : ";
    cin >> marks_cn;
    cout << "enter your score in maths  : ";
    cin >> marks_maths;
    cout << "enter your score in english : ";
    cin >> marks_eng;
    
    // debug statements
    cout << "Marks entered: " << endl;
    cout << "Computer Fundamentals: " << marks_computers << endl;
    cout << "Operating System: " << marks_os << endl;
    cout << "Computer Networking: " << marks_cn << endl;
    cout << "Maths: " << marks_maths << endl;
    cout << "English: " << marks_eng << endl;


   
    float res = marks_computers + marks_os + marks_cn + marks_maths + marks_eng;

    cout << "Total marks: " << res << endl;

     float percentage = (res / total_score) * 100;
    cout << "Total percentage: " << percentage << "%" << endl;
    

}