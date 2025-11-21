/*
Mehedi Mithu
Aug 27, 2025
Lab 1, iostream
*/

#include <iostream>
using namespace std;

int main() 
{
    cout << "-----Example 1: cout data ------"<<endl;
    cout<<"This is a C++ code"<<endl;
    // variables = temporary storage of data
    // declare the variable first
    string username  = "peterpan123";
    cout<<"\nWelcome to C++ \t\t "<<username<<endl;
    
    cout << "-----Example 2: cin data ------"<<endl;
    cout<<"Enter a new username "<<endl;
    cin >> username;
    cout<<"New user is "<<username<<endl;

    cout << "------Example 3: data type ------"<<endl;
    // declare variable
    char sym = '%';
    float distance = 5.63;
    int number = 8;

    cout<<"Given symbol = "<<sym<<endl;
    cout<<"Given distance = "<<distance<<endl;
    cout<<"Given number ="<<number<<endl;

 // Declare variables
    string country;
    char gender;
    int zipcode;
    double rate;

    cout<<"\n ------------ EXERCISE ------------ "<<endl;
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