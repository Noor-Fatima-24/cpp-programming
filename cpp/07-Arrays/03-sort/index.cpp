#include<iostream>
using namespace std;

int main()
{
    int a[10], i, j, temp,n=8;
    
    cout << "Enter 1 to 8 numbers: ";
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    
    cout << "Sorted array: ";
    for(i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
} 