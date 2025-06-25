// pointers in cpp
#include<iostream>
using namespace std;

int main() {
    int x = 20;
    int* ptr = &x;
  cout<<"p"<<ptr<<endl;
    *ptr = 50;  // change value of x using pointer
cout<<"n"<<ptr;
    cout << "New value of x: " << x;  // Output: 50
    return 0;
}