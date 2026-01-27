// Find sum of first N natural numbers
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "enter a number :";
    cin >> n;

    for (int m = 1; m <= n; m++) {
        sum += m;
    }

    cout << "Sum = " << sum;
    return 0;
}
