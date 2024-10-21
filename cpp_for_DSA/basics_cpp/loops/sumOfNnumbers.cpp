// sum of n natural numbers
#include <iostream>
using namespace std;

int main() {
   int sum=0, num;
   cout << "enter the number "<<endl;
   cin>>num;

   sum+= num * (num+1)/2;
   cout<< "Sum of first N natural numbers : "<<sum;

   return 0;

}
