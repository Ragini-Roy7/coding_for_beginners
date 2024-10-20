// if sides of triangle
#include <iostream>
using namespace std;
int main()
{
    int angle1,angle2,angle3; //in degrees
    cout << "enter angle : ";
    cin>> angle1;
    cout << "enter angle : ";
    cin>> angle2;
    cout << "enter angle : ";
    cin>> angle3;

  if(angle1+angle2+angle3==180) {
    cout << angle1+angle2+angle3<< "can be possible  angles of a triangle";
  }
 else if(angle1+angle2+angle3 >180) {
    
    cout << "can not be possible angles of a triangle";
 }
 else {
    cout<< "thanks";
 }
    
    

    
    

}