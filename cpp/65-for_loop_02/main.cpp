// Print multiplication table of a number
//  ex :  2 x 1 = 2
//        2 x 2 = 4

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter a number :";
    cin >> n;

    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
    return 0;
}
