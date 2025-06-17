#include<iostream>
using namespace std;

int sum(int arr[5], int key)  // Removed unnecessary 'n' and moved check inside
{
    bool check = true;
    for (int i = 0; i < 5; i++)   // i < 5 not i <= 4 is better
    {
        if (arr[i] == key)
        {
            check = false;
            return i;
        }
    }
    if (check == true)
    {
        cout << "Not in array" << endl;
    }
    return -1;
}

int main()
{
    int arr[5], key;
    cout << "Enter 5 elements: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter key to search: ";
    cin >> key;
    int result = sum(arr, key);
    if (result != -1)
        cout << "Found at index: " << result;
    return 0;
}
