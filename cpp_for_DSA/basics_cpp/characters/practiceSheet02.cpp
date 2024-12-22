#include <iostream>
using namespace std;
// int main() {
//     int num;
//     int count=0;

//     cout<<"enter num: "<<endl;
//     cin>>num;
//   while(num<=100) {
//     if(num %2 ==0) {
//         count +=num;
//     }
//     num++; //incrementing num from each iteration
//   }
//   cout<<"sum of even num is :"<<count<<endl;
// }

// int main()
// {
//     float cgpa;
//     int maxmarks_per_sub;
//     int numOfSub;
//     float total_marks;

//     cout << "enter cgpa:" << endl;
//     cin >> cgpa;

//     cout << "enter max marks each sub:" << endl;
//     cin >> maxmarks_per_sub;

//     cout << "total num of sub:" << endl;
//     cin >> total_marks;

//     total_marks = cgpa + maxmarks_per_sub + numOfSub;
//     cout << "total marks:" << total_marks << endl;
// }

int main() {
    int n,count=0;
    int sum=0;
     cout<< "enter n "<<endl;
     cin>> n;
     while(count<=n) {
        sum+=count++;
     }
     cout<<"sum is :"<<sum;
     return 0;
}
