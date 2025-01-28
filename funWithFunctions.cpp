//
//  funWithFunctions.cpp
//  Module Two
//
//  Created by Navjot Thind on 1/27/25.
//
#include <iostream>

using namespace std;

// Function to get an integer from the user
int getAnIntFromTheUser() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    return num;
}

// Function to compare two integers
void compareTwoInts(int a, int b) {
    if (a > b)
        cout << a << " is greater than " << b << "." << endl;
    else if (b > a)
        cout << b << " is greater than " << a << "." << endl;
    else
        cout << "Both numbers are equal." << endl;
}

// Function to return the sum of two integers
int sumTwoInts(int a, int b) {
    return a + b;
}

int main() {
    int num1 = getAnIntFromTheUser();
    int num2 = getAnIntFromTheUser();

    compareTwoInts(num1, num2);
    
    int sum = sumTwoInts(num1, num2);
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << "." << endl;

    return 0;
}
