#include <iostream>
using namespace std;

void primecheck()
 {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number <= 1)
     {
        cout << number << " is not a prime number." << endl;
    } 
    else 
    {
        int testing = 1; 
        for (int i = 2; i <= number / 2; i++) 
        {
            if (number % i == 0)
             {
                testing = 0; 
                break;
            }
        }
        if (testing == 1)
            cout << number << " is a prime number." << endl;
        else
            cout << number << " is not a prime number." << endl;
    }
}


void search(int arr[], int n)
 {
    int number;
    cout << "Enter the number to search: ";
    cin >> number;
    int index = -1;
    for (int i = 0; i < n; i++)
     {
        if (arr[i] == number) 
        {
            index = i;
            break;
        }
    }
    if (index != -1)
        cout << number << " found at index " << index << endl;
    else
        cout << number << " not found in the array." << endl;
}


void sortArray(int arr[], int n)
 {
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++)
         {
            if (arr[j] > arr[j + 1]) 
            {
                
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Updated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int deleteFromArray(int arr[], int n) {
    int i, loc;

    cout << "Enter the index (1 to " << n << ") to delete an element: ";
    cin >> loc;  
    if(loc < 1 || loc > n) { 
        cout << "Invalid index! Please enter a value between 1 and " << n << endl;
    } else {
      
        for(i = loc - 1; i < n - 1; i++) 
        {
            arr[i] = arr[i + 1]; 
        }
        
        n--; 
        cout << "Updated array: ";
        for(i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return n;
}
void printPattern()
 {
    int i, j;
    for(i = 1; i <= 5; i++)
     {
       
        for(j = 1; j <= 5 - i; j++) 
        {
            cout << "   ";
        }
        
        for(j = 2 * i - 1; j >= 1; j -= 2) 
        {
            cout << j << "  ";  
        }
        cout << endl;
    }
}

void divisible(int arr[], int n)
 {
    int found = 0; 
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] % 9 == 0)
         {
            cout << "Number divisible by 9: " << arr[i] << endl;
            found = 1;
            break;
        }
    }
    if (found == 0) 
    {
        cout << "No number divisible by 9 found in the array!" << endl;
    }
}

int main()
 {
    int arr[8];  
    int n = 8;  
    int choice;

    // Input 8 values from the user
    cout << "Enter 8 numbers for the array: ";
    for (int i = 0; i < n; i++)
     {
        cin >> arr[i];
    }
    int loop=1;
    while(loop)
    {

    cout << "\nMenu:" << endl;
    cout << "Press 1 to check if a number is prime or not" << endl;
    cout << "Press 2 to search a number in the array" << endl;
    cout << "Press 3 to sort the array" << endl;
    cout << "Press 4 to delete a value from the array" << endl;
    cout << "Press 5 to display a pattern "<< endl;
              cout <<         "            1 "<< endl; 
              cout <<         "         3  1 "<< endl;
              cout <<         "      5  3  1 "<< endl;
              cout <<         "   7  5  3  1 "<< endl; 
              cout <<        "9  7  5  3  1 "<< endl; 
   
    cout << "Press 6 to display a value in the array that is divisible by 9" << endl;
    cout << "Press 7 to exit" << endl;
    // while(true)  
    
        cout << "\nEnter your choice: ";
        cin >> choice;

        
        switch (choice) {
            case 1:
                primecheck();
                break;

            case 2:
                search(arr, n);
                break;

            case 3:
                sortArray(arr, n);
                break;

            case 4:
                n = deleteFromArray(arr, n);  
                break;

            case 5:
                printPattern();
                break;

            case 6:
                divisible(arr, n);
                break;

                case 7:
                cout<<" Fatal Error: User has left. System will miss you...GOODBYE!";
               loop=0;
               
                break;


            default:
                cout << "Invalid choice! Please select a valid option." << endl;
        }
    }

    return 0;
}
