// if area is greater than rectangle`s perimeter
#include <iostream>
using namespace std;
int main()
{
    float length, breadth;
    cout << "enter the length of rectangle : ";
    cin >> length;
    cout << "enter the breadth of rectangle : ";
    cin >> breadth;
    cout<<"Area is : "<<length*breadth<<endl;
    
    // perimeter calc
    cout<<"Perimeter is : "<<2*(length+breadth);
    if(length*breadth > 2*(length + breadth)) {
        cout<<"area is greater than perimter "<<endl;
    }
    else {
        cout<<"area is not greater than its perimter";
    }
}