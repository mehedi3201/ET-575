/* 
Mehedi Mithu
sep 17, 2025
lab 7 , branching mechanism using switch-case statement
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
    cout<<"\n ------------------ Exercise   -------------"<<endl;
    int num1, num2;
    char operation;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Choose an operation (+, -, *, /, %, q to quit): ";
    cin >> operation;

    switch (operation) {
        case '+':
            cout << "Result: " << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
            break;
        case '-':
            cout << "Result: " << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
            break;
        case '*':
            cout << "Result: " << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
            } else {
                cout << "Error: Division by zero is not allowed!" << endl;
            }
            break;
        case '%':
            if (num2 != 0) {
                cout << "Result: " << num1 << " % " << num2 << " = " << (num1 % num2) << endl;
            } else {
                cout << "Error: Modulus by zero is not allowed!" << endl;
            }
            break;
        case 'q':
        case 'Q':
            cout << "Quitting the program..." << endl;
            break;
        default:
            cout << "Invalid operation. Please choose (+, -, *, /, %, q)." << endl;
    }

    return 0;
}
