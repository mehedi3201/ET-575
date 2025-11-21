/*
Mehedi Mithu
Oct 22, 2025
Lab 11, Introduction to functions
*/

#include <iostream>

using namespace std;

// void function does not return any value
void printhello(){
    cout << "Hello functions!"<<endl;
    return;
}

// void function with parameters
void greeting(string name){
    cout << "Good afternoon " << name << endl;
    return;
}

// example 3, function that returns an interger(whole number)
int returnfive(){
    return 5;
}

// example 4, any code after the return will not be executed
void printsome(){
    cout<<"Something"<<endl;
    return;
    cout<<"After the return" << endl; // This line will not be executed
}
int somenumber(){
    int num = 10;
    return num; // code after this line will not be executed
    num *= 2;
    return num;
}

// example 5, function that calculates and returns the area of a square
float areaSquare(float side){
    float area = side * side;
    return area;
}

// example 6, function that calculates and returns the product of two numbers
int product(int n1, int n2){
    return n1 * n2;
}

// example 7, function that calculates and returns the farenheit temperature
double fah(double celsius){
    return celsius * 1.8 + 32.0;
}

void printfah(double f){
    cout<<"The farenheit temperature is: "<< f << endl;
    return;
}

// example 8, check a number
string checknumber(int number){
    if(number == 0){
        return "Zero";
    }
    else if(number > 0){
        return "Positive";
    }
    else{
        return "Negative";
    }
}

void printnumber(int x, string n){
    cout<<"Number "<< x << " Is "<< n << endl;
    return;
}

// Exercise functions
bool checkeven(int a){
    if(a%2 == 0){
        return true;
    }
    else{
        return false;
    }
}

void printeven(int number, bool result){
    cout<<"Is "<< number << " Even? " << result << endl;
    return;
}