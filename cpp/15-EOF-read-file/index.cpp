// A difficult concept to understand...

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("data.txt");
    int number, total = 0;

    while (file >> number) {
        total += number;
    }

    cout << "Total = " << total << endl;
    return 0;
}
