//Problem: Check age and ID for permission granting 
#include <iostream>
using namespace std;

int main() {
    int age = 10; 
    int id = 0;

    if (age >= 18) {
        if (id == 1) {
            cout << "Permission Granted";
        }
        else {
            cout << "ID Required";
        }
    }

    else {
        cout << "Under Age";
    }

    return 0;
}
