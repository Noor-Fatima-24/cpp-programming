#include<iostream>
using namespace std;

int main()
{
    int b[10], i, loc, n = 8;  // We assume the user enters 8 numbers, and n is initialized to 8.
    
    cout << "Enter 1 to 8 numbers: ";
    for(i = 0; i < n; i++)  // Take 8 inputs from the user.
    { 
        cin >> b[i];
    }
    
    cout << "Enter the value to delete a value: ";
    cin >> loc;  // Get the value to delete the element.
    
    // Validate the value input.
    if(loc <= 0 || loc > n)
    { 
        cout << "Invalid value! Please enter a value between 1 and "<<n << endl;
    }
    else
    {
        // Shift elements to delete the element at the given value.
        for(i = loc - 1; i < n - 1; i++)  // Shift elements left to fill the gap.
        {
            b[i] = b[i + 1];  // Shift each element to the left by one position.
        }
        
        n--;  // Reduce the size of the array as one element is removed.
        
        // Print the updated array.
        cout << "Updated array: ";
        for(i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
} 
