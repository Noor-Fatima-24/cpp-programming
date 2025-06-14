// Q5: Take marks of 5 subjects, calculate percentage, and print grade:
// >=90 A+, >=80 A, >=70 B, >=60 C, >=50 D, else F
#include<iostream>
using namespace std;

int main()
{
    float s1,s2,s3,s4,s5,p,g;
    cout<<"Enter marks of five subjects : ";
    cin>>s1>>s2>>s3>>s4>>s5;

     int sum = s1 + s2 + s3 + s4 + s5;

     p = (sum * 100)/500;

     if ( p >= 90 )
     {
        cout<<"Your grade is A+ !";
     }
     else if ( p >= 80 )
     {
        cout<<"Your grade is A !";
     }
     else if ( p >= 70 )
     {
        cout<<"Your grade is B !";
     }
     else if ( p >= 60 )
     {
        cout<<"Your grade is C !";
     }
     else if ( p >= 50 )
     {
        cout<<"Your grade is D !";
     }
     else{
        cout<<"Your grade is F !";
     }
     
    
    return 0;
}