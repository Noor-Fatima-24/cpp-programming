#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Enter a number (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "You chose One." << endl;
            break;
        case 2:
            cout << "You chose Two." << endl;
            break;
        case 3:
            cout << "You chose Three." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}
