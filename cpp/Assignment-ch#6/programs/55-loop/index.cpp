
/*
A program to diplay following output by for loop:
#####*#####
####*#*####
###*###*###
##*####*###
#*#######*#
*#########*
*/

#include<iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if (j == 5 - i || j == 5 + i) 
        {
                cout << "*"; 
            } else {
                cout << "#"; 
            }
        }
        cout << endl;
        
    }
    
    



    return 0;
}