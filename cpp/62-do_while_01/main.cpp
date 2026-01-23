// Sum of First n Natural Numbers

#include <iostream>
using namespace std;

int main() {
    int n, i = 1, sum = 0;
    cout << "Enter a number: ";
    cin >> n; 

    do { 
        sum += i;  
        i++; 
    } while (i <= n);
                  
    cout << "Sum = " << sum;
    return 0;
}
