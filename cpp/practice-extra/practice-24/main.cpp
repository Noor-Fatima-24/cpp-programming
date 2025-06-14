// Q8: Print all even numbers from 1 to 100.
#include<iostream>
using namespace std;

int main()
{
    cout<<"All even numbers : ";
    for (int i = 1; i <= 100; i++)
    {
        if (i%2 == 0)
        {
            cout<<i<<endl;
        }
        
    } 
    
    return 0;
}