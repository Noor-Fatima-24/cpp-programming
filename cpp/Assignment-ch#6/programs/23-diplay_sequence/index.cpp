
// Write a program to that prints the sum of following sequence
// (   30 + 33 + 39+….+ 60 )





#include <iostream>
using namespace std;

int main() 
{
	int sum = 0 ;
	for ( int a = 30 ; a <= 60 ; a += 3 )
	{
		sum += a ;
	}
    cout << "Sum of the series: " << sum ;
	return 0;
}

