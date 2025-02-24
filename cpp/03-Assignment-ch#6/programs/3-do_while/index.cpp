
// Write a program that displays the sum of following
//  series using do while loop.
//  (   1+ 1/4 + 1/8 +…+ 1/100 )

#include<iostream>

using namespace std;

int main()
{
    int i = 4 ;
    float sum ;
    sum = 1.0 ;
    
    do
    {
        i += 4 ;
        sum += 1.0 / i ;
    } 
    while (i <= 100) ;
    
    cout << "Sum of the series: " << sum ;
    
    return 0;
}