#include<iostream>
using namespace std;

// Function to find the index of key in array
int sum(int arr[5], int key)
{
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == key)
        {
            return i;  // Return index if key found
        }
    }
    // If not found
    cout << "Key not in array" << endl;
    return -1;
}

int main()
{
    int arr[5], key;
    cout << "Enter 5 array elements: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter key to search: ";
    cin >> key;

    int result = sum(arr, key);

    if (result != -1)
        cout << "Key found at index: " << result;
    
    return 0;
}
