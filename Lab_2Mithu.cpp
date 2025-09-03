#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare variables
    string country;
    char gender;
    int zipcode;
    double rate;

    // Ask for user input
    cout << "Enter your country: ";
    cin >> country;

    cout << "Enter your gender (f for female, m for male, o for others): ";
    cin >> gender;

    cout << "Enter your zipcode: ";
    cin >> zipcode;

    cout << "Enter your tax rate (with decimal): ";
    cin >> rate;

    // Display the results
    cout << "\nEntered country:\t" << country << endl;
    cout << "Selected gender:\t" << gender << endl;
    cout << "Zip code:\t\t" << zipcode << endl;
    cout << "Tax rate:\t\t" << rate << endl;

    return 0;
}
