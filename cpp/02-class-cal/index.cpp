#include <iostream>
using namespace std;

int main() {
    int p = 4;  // Starting padding value
    for (int i = 1; i <= 100; i++) {
        // Print the class with padding value
        cout << ".p-" << i << " { \n";
        cout << "    padding: " << p << "px; \n";
        cout << "} \n\n";
        
        // Increase padding value by 4px for each iteration
        p += 4;
    }
    
    return 0;
}
