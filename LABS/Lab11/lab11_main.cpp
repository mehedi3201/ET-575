/*
Mehedi Mithu
Oct 22, 2025
Lab 11, Introduction to functions
*/

#include <iostream>
#include "lab11_function.cpp"

using namespace std;

int main(){
    cout<<"\n-----Example 1: void function -----"<<endl;
    // call the void function
    printhello(); 
    printhello(); 
    printhello();
    
    cout<<"\n-----Example 2: void function with arguments -----"<<endl;
    string username = "Anna";
    greeting("Peter");
    greeting(username);
    greeting("Tom");

    cout<<"\n-----Example 3: function with returning value " << endl;
    int  savefive = returnfive();
    cout<< "The returning value is             \t"<< savefive << endl;
    savefive += 2;
    cout << "The returning value after += 2 is \t"<< savefive << endl;


    cout << "\n-----Example 4: code after the return" << endl;
    printsome();
    int n = somenumber();
    cout<< "Some number = "<<n<<endl;


    cout << "\n-----Example 5: calculates are of a square" << endl;
    float area_square = areaSquare(2.5);
    cout<<"The area of a square is " << area_square << endl;


    cout << "\n-----Example 6: product of two numbers" << endl;
    int p = product(2,3);
    cout<<"The product is "<< p << endl;

    cout << "\n-----Example 7: calculates the farenheit temperature" << endl;
    double f = fah(12.5);
    printfah(f);
    
    cout<<"\n------Example 8: check a number -----"<<endl;
    int x = 3;
    string checknum = checknumber(x);
    printnumber(x, checknum);


    cout<<"\n-----Exercise -----"<<endl;
    int a = 6;
    bool check_e = checkeven(a);
    printeven(a, check_e);

    return 0;
}