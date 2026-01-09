// Example 1: Day of the Week
#include <iostream>
using namespace std;

int main() {
    int day = 57;

    switch(day) {
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;
        case 3: cout << "Wednesday"; break;
        case 4: cout << "Thursday"; break;
        case 5: cout << "Friday"; break;
        default: cout << "Invalid Day";
    }
    return 0;
}
