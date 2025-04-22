#include<iostream>
using namespace std;

void prime(int n) {
    int c, num, p = 1;
    cout << "Enter an integer: ";
    cin >> num;
    for (c = 2; c <= num / 2; c++)
        if (num % c == 0) {
            p = 0;
            break;
        }
    if (p == 1)
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is a composite number." << endl;
}

void show(int arr[]) {
    int i, n, loc = -1;
    cout << "Enter value to find: ";
    cin >> n;
    for (i = 0; i < 10; i++)
        if (arr[i] == n)
            loc = i;
    if (loc == -1)
        cout << "Value not found in the array." << endl;
    else
        cout << "Value found at index " << loc << endl;
}

void sort(int arr[]) {
    int i, j, min, temp;
    cout << "Enter 5 values:\n";
    for (i = 0; i < 5; i++) {
        cout << "Enter value: ";
        cin >> arr[i];
    }
    cout << "The original values in array:\n";
    for (i = 0; i < 5; i++)
        cout << arr[i] << " ";

    for (i = 0; i < 4; i++) {
        min = i;
        for (j = i + 1; j < 5; j++)
            if (arr[j] < arr[min])
                min = j;
        if (min != i) {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    cout << "\nThe sorted array:\n";
    for (i = 0; i < 5; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void del(int arr[]) {
    int value, i, j;
    cout << "Initial array: ";
    for (i = 0; i < 5; i++)
        cout << arr[i] << " ";
    cout << endl;
    cout << "Enter the value to delete from the array: ";
    cin >> value;
    bool found = false;
    for (i = 0; i < 5; i++) {
        if (arr[i] == value) {
            found = true;
            for (j = i; j < 4; j++) {
                arr[j] = arr[j + 1];
            }
            arr[4] = 0; 
            break;
        }
    }
    if (!found) {
        cout << "Value not found in the array." << endl;
    } else {
        cout << "Array after deletion: ";
        for (i = 0; i < 5; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
}

void dis(int n) {
    int i, j, s;
    for (i = 1; i <= 4; i++) {
        for (s = 1; s <= 4 - i; s++)
            cout << " ";
        for (j = 2 * i - 1; j >= 1; j -= 2)
            cout << j;
        cout << endl;
    }
}

void chk_number(int arr[]) {
    int i;
    cout << "Enter 5 numbers: ";
    for (i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    cout << "Numbers divisible by 9: ";
    for (i = 0; i < 5; i++) {
        if (arr[i] % 9 == 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int press, arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    cout << "Enter a value of press: ";
    cin >> press;

    if (press == 1)
        prime(0);
    else if (press == 2)
        show(arr);
    else if (press == 3)
        sort(arr);
    else if (press == 4)
        del(arr);
    else if (press == 5)
        dis(0);
    else if (press == 6)
        chk_number(arr);
    else if (press == 7)
        cout << "Exit the program" << endl;

    return 0;
}
