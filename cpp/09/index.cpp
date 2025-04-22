#include <iostream>
#include <locale>
using namespace syd;

int main() {
    locale::global(locale("")); // Set locale for Unicode support
    wcout.imbue(locale()); // Apply locale to wcout

    wcout << L"Hello 🌍! Welcome to C++! 😎🔥\n"; 
    wcout << L"\U0001F525\U0001F60E\U0001F680\n"; // Unicode for 🔥😎🚀
    
    return 0;
}
