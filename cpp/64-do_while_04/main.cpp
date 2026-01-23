// Menu-Driven Program


#include <iostream>
using namespace std;

int main() {

    int choice;

    do {
        cout << "\nMenu:";
        cout << "\n1. Add";
        cout << "\n2. Subtract";
        cout << "\n3. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 1) {
            int a, b;
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Sum = " << a + b;
        }
        else if (choice == 2) {
            int a, b;
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Difference = " << a - b;
        }
        

    } while (choice != 3);

    return 0;
}
