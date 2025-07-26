#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void arrayAndStrings(){
        // Example of using arrays and strings in C++
        
        // Declare and initialize an array
        int arr[] = {1, 2, 3, 4, 5};
        int n = sizeof(arr) / sizeof(arr[0]);
        
        // Print the array elements
        cout << "Array elements: ";
        for(int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        // Declare and initialize a string
        string str = "Hello, World!";
        
        // Print the string
        cout << "String: " << str << endl;

        // Accessing characters in the string
        cout << "First character: " << str[0] << endl;
    }
};