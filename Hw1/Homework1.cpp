/*
Homework 1: strings, string methods, and numerical variables

Student's Name: Mehedi Mithu
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    //-------------------------- ACTIVITY 1 --------------------------
    string part1 = "Welcome to ";
    string part2 = "New York City ";
    string name;

    // Step 2: collect a name
    cout << "Enter your name: ";
    getline(cin, name);

    // Step 3: concatenate
    string message = part1 + part2 + name;

    // Step 5: length of message
    int length = message.length();

    // Step 6: find "ma"
    int index = message.find("ma");

    // Step 7: replace "ma" with "%---%" if found
    string replacedMessage = message;
    if (index != string::npos) {
        replacedMessage.replace(index, 2, "%---%");
    }

    // Step 8: print results
    cout << "\n------------------------------ RESULT ACTIVITY 1 ----------------------------\n";
    cout << "concatenated message:\t" << message << endl;
    cout << "Message length:\t\t" << length << endl;
    cout << "Index of character 'ma':\t" << index << endl;
    cout << "Replace 'ma' with %---%:\t" << replacedMessage << endl;


    //-------------------------- ACTIVITY 2 --------------------------
    const float PI = 3.14159;
    float radius, height;

    // Step 2: input
    cout << "\nEnter radius (cm): ";
    cin >> radius;
    cout << "Enter height (cm): ";
    cin >> height;

    // Step 3 and 4
    bool isGreater = (radius > height);
    bool isEqual = (radius == height);

    // Step 5: triple height and increase radius by 5
    height *= 3;
    radius += 5;

    // Step 6: radius not equal to and greater than height
    bool comparison = (radius != height && radius > height);

    // Step 7: calculate volume
    float volume = PI * radius * radius * height;

    // Step 8: print results
    cout << "\n------------------------------ RESULT ACTIVITY 2 ----------------------------\n";
    cout << "Step 3) Is the radius greater than height?\t\t\t" << isGreater << endl;
    cout << "Step 4) Is the radius equal to height?\t\t\t\t" << isEqual << endl;
    cout << "Step 5) Triple height =\t\t\t\t\t" << height << "cm" << endl;
    cout << "Step 5) Increased radius by 5 =\t\t\t\t" << radius << "cm" << endl;
    cout << "Step 6) Is the radius not equal to and greater than height ?\t" << comparison << endl;
    cout << "Step 7) The volume of a right cylinder with radius " 
         << radius << "cm and height " << height << "cm is = " 
         << volume << "cm^3" << endl;

    return 0;
}
