#include<iostream>
using namespace std;

int main()
{
    int n;
    bool check = true;

    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1) {
        check = false;
    } else {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                check = false;
                break;
            }
        }
    }

    if (check == true) {
        cout << "Prime :)" << endl;
    } else {
        cout << "Not a prime :(" << endl;
    }

    return 0;
}
