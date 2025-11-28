/*
Mehedi Mithu
Homework 9 – Arrays  applications
*/

#include <iostream>
#include "HW9_Function.cpp"

using namespace std;

int main() { 

    int sizearray = arraysize();   // Get array size 

    int noise[sizearray];     // Declare array with the obtained size 

    //Populate array with random values 

    randPopulate(noise, sizearray);

    // Display original array 

    cout << "Original Set:" << endl;

    print(noise, sizearray); 

    // Reverse the array 

    reverse(noise, sizearray);   

    // Display reversed array 

    cout << endl << "Reversed Set:" << endl;

    print(noise, sizearray); 

    return 0; 

} 