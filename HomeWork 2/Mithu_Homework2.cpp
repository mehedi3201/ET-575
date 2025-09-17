/*
Homework 2: Branching

Mehedi Mithu
*/

#include <iostream>
using namespace std;

/* ---------------------------------------------------------
   Program 1: Age eligibility
   Algorithm:
   1) Ask user for age (int).
   2) If age < 0 or age > 120 → print "Invalid age..."
   3) Else if age < 13 → "Not eligible for any activities."
   4) Else if 13–17 → "Eligible for youth activities."
   5) Else if 18–64 → "Eligible for adult activities."
   6) Else (65+) → "Eligible for senior activities."
--------------------------------------------------------- */
void program1_ageEligibility() {
    cout << "\n------ Program 1: Age Eligibility ------\n";
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age < 0 || age > 120) {
        cout << "Invalid age. Please enter a valid age." << endl;
    } else if (age < 13) {
        cout << "Not eligible for any activities." << endl;
    } else if (age <= 17) {
        cout << "Eligible for youth activities." << endl;
    } else if (age <= 64) {
        cout << "Eligible for adult activities." << endl;
    } else {
        cout << "Eligible for senior activities." << endl;
    }
}

/* ---------------------------------------------------------
   Program 2: Nested conditional statement
   Description: Read two integers, compute sum, and display a
   message based on the sum using nested conditionals.

   Table-driven rules (simplified into code):
   - Below 0:           "False alarm! The sum is ____"
   - 1..100:
       * If multiple of 5 → "____ is a pentagon"
       * Else if odd     → "____ is an odd guess"
       * Else            → "The sum is ____"
   - 101..200:          "The new lucky number is _____"
   - 201..999:          "_____ is a dreaming number"
   - 1000+:
       * If 2000+       → "_____ approaches to the infinite and beyond!"
       * Else if even   → "_____ approaches to the infinite evenly!"
       * Else           → "The sum is _____"

   Note: The table didn’t specify behavior for sum == 0, so we print a neutral message.
--------------------------------------------------------- */
void program2_nestedSumMessages() {
    cout << "\n------ Program 2: Nested Conditional (Sum Messages) ------\n";
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    int sum = a + b;

    if (sum < 0) {
        cout << "False alarm! The sum is " << sum << endl;
    } else if (sum == 0) {
        cout << "The sum is 0." << endl;
    } else if (sum >= 1 && sum <= 100) {
        // Nested checks inside 1..100
        if (sum % 5 == 0) {
            cout << sum << " is a pentagon" << endl;
        } else if (sum % 2 != 0) {
            cout << sum << " is an odd guess" << endl;
        } else {
            cout << "The sum is " << sum << endl;
        }
    } else if (sum >= 101 && sum <= 200) {
        cout << "The new lucky number is " << sum << endl;
    } else if (sum >= 201 && sum <= 999) {
        cout << sum << " is a dreaming number" << endl;
    } else { // sum >= 1000
        // Nested checks inside 1000+
        if (sum >= 2000) {
            cout << sum << " approaches to the infinite and beyond!" << endl;
        } else if (sum % 2 == 0) {
            cout << sum << " approaches to the infinite evenly!" << endl;
        } else {
            cout << "The sum is " << sum << endl;
        }
    }
}

/* ---------------------------------------------------------
   Program 3: Temperature converter (menu with switch-case)
   Requirements:
   - Show menu:
       1) Celsius to Fahrenheit
       2) Fahrenheit to Celsius
       3) Kelvin to Celsius
       4) Kelvin to Fahrenheit
       5) Exit
   - If user selects a conversion, ask for the temperature
   - Use switch-case for options
   - Perform conversion and display result
   - Handle invalid selections

   Formulas (use double to avoid integer division):
   - C -> F:  F = C * (9.0/5.0) + 32
   - F -> C:  C = (F - 32) * (5.0/9.0)
   - K -> C:  C = K - 273.15
   - K -> F:  F = (K - 273.15) * (9.0/5.0) + 32

   Note: We allow any double input. (Optional check: Kelvin below 0 is non-physical,
   but the instructions don’t require enforcing absolute zero.)
--------------------------------------------------------- */
void program3_tempConverter() {
    cout << "\n------ Program 3: Temperature Converter (switch-case) ------\n";
    cout << "Select a conversion:\n";
    cout << "1) Celsius to Fahrenheit\n";
    cout << "2) Fahrenheit to Celsius\n";
    cout << "3) Kelvin to Celsius\n";
    cout << "4) Kelvin to Fahrenheit\n";
    cout << "5) Exit\n";
    cout << "Enter option (1-5): ";

    int option;
    cin >> option;

    double input, output;

    switch (option) {
        case 1:
            cout << "Enter temperature in Celsius: ";
            cin >> input;
            output = input * (9.0 / 5.0) + 32.0;
            cout << input << " Celsius is equal to " << output << " Fahrenheit" << endl;
            break;

        case 2:
            cout << "Enter temperature in Fahrenheit: ";
            cin >> input;
            output = (input - 32.0) * (5.0 / 9.0);
            cout << input << " Fahrenheit is equal to " << output << " Celsius" << endl;
            break;

        case 3:
            cout << "Enter temperature in Kelvin: ";
            cin >> input;
            output = input - 273.15;
            cout << input << " Kelvin is equal to " << output << " Celsius" << endl;
            break;

        case 4:
            cout << "Enter temperature in Kelvin: ";
            cin >> input;
            output = (input - 273.15) * (9.0 / 5.0) + 32.0;
            cout << input << " Kelvin is equal to " << output << " Fahrenheit" << endl;
            break;

        case 5:
            cout << "Exiting temperature converter..." << endl;
            break;

        default:
            cout << "Invalid option. Please run again and choose 1-5." << endl;
            break;
    }
}

int main() {
    // Run the three programs in sequence (single-run each), like class examples.
    program1_ageEligibility();
    program2_nestedSumMessages();
    program3_tempConverter();

    cout << "\n------ End of Homework 2 ------\n";
    return 0;
}
