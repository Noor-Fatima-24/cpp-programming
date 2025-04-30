#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "Menu:\n1. Start\n2. Help\n3. Exit\nEnter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Starting the program..." << endl;
            break;
        case 2:
            cout << "Help section..." << endl;
            break;
        case 3:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
