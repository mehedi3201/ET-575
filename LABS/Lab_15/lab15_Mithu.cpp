/*
Mehedi Mithu
nov 12, 2025
lab 15: introduction to array, pointer and reference
*/

#include <iostream>
#include "lab15_function_Li.cpp"

using namespace std;

int main(){
    cout << "\n----- Example 1: pointers -----" << endl;;
    pointer_ref();

    cout << "\n----- Example 2: poniter and reference in a function -----" << endl;
    string something = "Hello World!";
    printValue(something);
    printReference(something);
    printaddress(&something);
    printValue(something);
    printValue(something);
    
    cout << "\n----- Example 3: array -----" << endl;
    arrays();

    cout << "\n----- Example 4: array sizes-----" << endl;
    sizeofarrays();

    cout << "\n----- Example 5: Loop in an array -----" << endl;
    looparray();

    cout << "\n----- Lab Exercise -----" << endl;
    exercise();

    return 0;
}