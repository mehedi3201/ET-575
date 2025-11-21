/*
Mehedi Mithu
Homework 6, functions and introduction to pointers and references
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

// Hypotenuse calculation
int rand_side(){
    return 1 + rand() % 21;
}

float hyp(int side1, int side2){
    return sqrt(pow(side1,2)+pow(side2,2));
}

void print_result(int side1, int side2, double hypotenuse){
    cout << "The hypotenuse of a right angle with side " << side1 << " and side " << side2 << " is = " << hypotenuse << endl;
}


int main() {

    // Pointer and Reference
    cout << "----- Pointer and Reference -----" << endl;
    int* ptr;
    int var = 7;
    int foo = 21;

    ptr = &var; // ptr now holds the address of var
    cout << "Pointer 1 = " << ptr << endl;
    cout << "Value 1 = "<<*ptr << endl;

    ptr = &foo; // ptr now holds the address of foo
    cout << "Pointer 2 = " << ptr << endl;
    cout << "Value 2 = "<<*ptr << endl;

    int& ref = var;
    cout<<"ref = "<< &ref << endl;

    cout << "----- Hypotenuse Calculation -----" << endl;
    srand(time(0));
    int side1 = rand_side();
    int side2 = rand_side();
    float hyptoenuse = hyp(side1, side2);
    print_result(side1, side2, hyptoenuse);


    return 0;

}