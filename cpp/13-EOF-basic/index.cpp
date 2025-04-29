#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter numbers (Ctrl+Z or Ctrl+D to stop):\n";

    while (cin >> num) {
        sum += num;
    }

    cout << "Total sum: " << sum << endl;

    return 0;
}
