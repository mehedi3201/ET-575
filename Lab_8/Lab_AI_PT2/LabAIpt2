#include <iostream>
using namespace std;

int main() {
    int choice;
    double celsius, fahrenheit;

    // Display menu
    cout << "Choose conversion type:\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "Enter choice: ";
    cin >> choice;

    // Conditional logic
    if (choice == 1) {
        cout << "\nEnter temperature in Celsius: ";
        cin >> celsius;

        fahrenheit = (1.8 * celsius) + 32;
        cout << celsius << "°C is " << fahrenheit << "°F" << endl;
    } 
    else if (choice == 2) {
        cout << "\nEnter temperature in Fahrenheit: ";
        cin >> fahrenheit;

        celsius = (5.0 / 9.0) * (fahrenheit - 32);
        cout << fahrenheit << "°F is " << celsius << "°C" << endl;
    } 
    else {
        cout << "\nInvalid choice. Please enter 1 or 2." << endl;
    }

    return 0;
}

// 1. Does the AI code use C++ concepts you're unfamiliar with? Explain.
// No, the code AI used all all teached in class, I'm familiar with the code.


// 2. Are there any issues or improvements you noticed? Explain.
// When asking AI to write the program Celsius to Fahrenheit, AI like to use fahrenheit = (celsius * 9.0 / 5.0) + 32 as the formula, instead of (1.8 * celsius) + 32.

// 3. What test cases did you try, and why? Explain.
// I tried 25 celsius to fahrenheit, and 77 fahrenheit to celsius, because I know their correct answer, so I can verify the program is correct or not.