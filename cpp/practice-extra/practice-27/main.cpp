// Q11: Take 5 numbers in an array, and print their sum.
#include<iostream>
using namespace std;
int main()
{
    int arr[5] ;
    cout<<"Enter 5 numbers in array : ";

    int sum = 0;
    for (int i = 0; i <= 4; i++)
    {
    cin>>arr[i];
        sum = sum + arr[i];
    }
    cout<<"Sum = "<<sum;


return 0;
}