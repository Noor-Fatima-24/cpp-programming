#include <iostream>
using namespace std;

int main() {
    int noor[6] = {10, 20, 30, 40, 50, 60};  // Example nooray
    int size = 6;  // Number of elements
    int value, index = -1;

    // Taking value to delete
    cout << "Enter value to delete: ";
    cin >> value;

    // Finding the index of the value
    for (int i = 0; i < size; i++) {
        if (noor[i] == value) {
            index = i;
            break;
        }
    }

    // If value not found
    if (index == -1) {
        cout << "Value not found in nooray." << endl;
    } else {
        // Shifting elements left
        for (int i = index; i < size - 1; i++) {
            noor[i] = noor[i + 1];
        }

        // Reducing the size
        size--;

        // Displaying the updated nooray
        cout << "Updated nooray: ";
        for (int i = 0; i < size; i++) {
            cout << noor[i] << " ";
        }
        cout << endl;
    }

    return 0;
}