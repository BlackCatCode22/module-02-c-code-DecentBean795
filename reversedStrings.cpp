//
//  reversedStrings.cpp
//  Module Two
//
//  Created by Navjot Thind on 1/27/25.
//
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    
    reverse(input.begin(), input.end());
    
    cout << "Reversed string: " << input << endl;
    return 0;
}
