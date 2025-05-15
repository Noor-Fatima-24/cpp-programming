/*
18:
   Hollow pyramid:
                     *   
                    * *  
                   * - *    
                  *******

logic:
      only one star is replaced by space , just think of its position.
      it lies at row no.3 and col no.4

*/
#include<iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int s = 3; s >= i; s--)
        {
            cout<<" ";
        }
        
         for (int j = 1; j <= (2 * i - 1); j++)
        {
            if (j == 1 || j == (2 * i - 1) || i == 4)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }
    
    return 0;
}

/*

 if (j == 1 || j == (2 * i - 1) || i == rows)
                cout << "*";

more deep: 

In a pyramid pattern using nested loops:

i is the current row number (starts from 1).
For each row i, the number of columns (stars or spaces) printed is:
2 * i - 1 = print *

So:

Row 1 → 1 star
Row 2 → 3 stars
Row 3 → 5 stars
Row 4 → 7 stars
(See how it's always 2*i - 1)

*/