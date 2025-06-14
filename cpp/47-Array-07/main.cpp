/* 
🧮 5. Count even and odd numbers in an array
  EX: if Input: [1, 2, 3, 4, 5], Output: Even = 2, Odd = 3
*/

#include <iostream>
#include <algorithm> // For sort and reverse
using namespace std;

int main() {
    const int SIZE = 10;
    int arr[SIZE];

    // 1. Input array elements
    cout << "Enter " << SIZE << " integers:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // 2. Display original array
    cout << "\nOriginal Array: "; 
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
     found = false;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] == target) {
            cout << target << " found at index " << i << endl;
            found = true;
            break;
        }
    }
    if (!found)
        cout << target << " not found in the array.\n";

    // 6. Reverse the array
    cout << "\nReversed Array: ";
    for (int i = SIZE - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    // 7. Sort the array
    sort(arr, arr + SIZE);
    cout << "\n\nSorted Array (ascending): ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
