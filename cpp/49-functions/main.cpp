/*
📜 Functions in C++ (Basic Notes)
✅ What is a function?
A function is a block of code that:

1. Performs a specific task.
2. Can be called multiple times.
3. Makes your program organized and reusable.

*/

#include<iostream>
 using namespace std;
 
/* 
basic syntax : return_type function_name(parameters/arguments) 
{
body / code
return value; // optional if return_type is not void
}
*/

int sum ( int a, int b )
{
     int sum = a + b ;
     cout<<" sum = "<<sum;
     return sum;
}

 int main()
 {
    int a , b;
    cout<<"enter two integers : ";
    cin>>a>>b;
     //function_name(arguments);  calling a function
    sum(a,b);
     return 0;
 }