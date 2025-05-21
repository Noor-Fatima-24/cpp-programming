/*

✅ 2. Sum of Array Elements Manually (No Loop)

*/

#include<iostream>
using namespace std;

int main()
{
    int arr[3];

    cout<<"enter three number to sum up :"<<endl;
    cin>>arr[0];
    cin>>arr[1];
    cin>>arr[2];

    int sum = arr[0] + arr[1] + arr[2] ;

    cout<<endl<<" sum = "<<sum;

    return 0;
}