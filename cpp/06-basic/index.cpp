#include<iostream>
using namespace std;

int main()
{
    int a, s, d, f, n;
    int aS, sS, dS, fS, nS;

    // Getting input from the user
    cout << "Enter four values: ";
    cin >> a >> s >> d >> f;

    // Assigning values to the operation result variables
    aS = a + s + d + f;  // sum
    sS = a - s - d - f;  // subtraction
    dS = a * s * d * f;  // multiplication
    fS = a / s / d / f;  // division (note: be careful with division by zero)
    nS = a % s % d % f;  // modulus

    // Printing the results
    cout << "Sum = " << aS << endl<< "Subtraction = " << sS << endl << "Multiplication = " << dS << endl << "Division = " << fS << endl << "Modulus = " << nS << endl;

    return 0;
}
