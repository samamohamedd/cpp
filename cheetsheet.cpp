// C++ Cheat Sheet

// Preprocessor Directives
#include <iostream>     // Input/output stream
#include <vector>       // Dynamic array
#include <string>       // String manipulation
#include <algorithm>    // Algorithms library
#include <cmath>        // Mathematical functions

using namespace std;

// Main Function
int main() {
    // Variables
    int myInt = 10;
    float myFloat = 3.14;
    char myChar = 'A';
    bool myBool = true;
    string myString = "Hello, World!";
    
    // Input/Output
    cout << "Output" << endl;      // Display output
    cin >> myInt;                  // Read input
    
    // Control Structures
    if (myInt > 5) {
        // Code to execute if condition is true
    } else if (myInt == 5) {
        // Code to execute if condition is true
    } else {
        // Code to execute if no conditions are true
    }
    
    switch (myChar) {
        case 'A':
            // Code to execute if myChar is 'A'
            break;
        case 'B':
            // Code to execute if myChar is 'B'
            break;
        default:
            // Code to execute if no cases match
            break;
    }
    
    for (int i = 0; i < 5; i++) {
        // Code to repeat 5 times
    }
    
    while (myBool) {
        // Code to execute while myBool is true
    }
    
    do {
        // Code to execute at least once, then repeat while myBool is true
    }
    

    // Arrays
    int myArray[5];             // Declaration
    myArray[0] = 1;             // Assignment
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);   // Get array size
    
    // Vectors
    vector<int> myVector;       // Declaration
    myVector.push_back(1);      // Add element
    myVector.pop_back();        // Remove last element
    
    // Strings
    string myString = "Hello";
    myString += " World";       // Concatenation
    
    // Algorithms
    sort(myVector.begin(), myVector.end());    // Sort vector
    
    // Math Library
    int absValue = abs(-5);      // Absolute value
    double squareRoot = sqrt(25);    // Square root
    
    // Classes and Objects
    class MyClass {
    public:
        int myVar;
        
        void myMethod() {
            // Code to execute
        }
    };
    
    MyClass obj;                // Create object
    obj.myVar = 10;             // Access object's member variable
    obj.myMethod();             // Call object's member method
    
    return 0;
}