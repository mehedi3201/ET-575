/*
Mehedi Mithu
Oct 26, 2025
Homework 5, functions
*/

#include <iostream>
#include "hw5_functions.cpp"


using namespace std;

int main(){
    cout<<"------Program 1: Wind chill calculation------"<<endl;
    int s = speed();
    int t = temp();
    prompt_result(windspeed(s,t));


    cout << "------Program 2: Descending order entries------"<<endl;
    int num1 = collectNumber();
    int num2 = collectNumber();
    int num3 = collectNumber();
    bool desc_order = inOrder(num1,num2,num3);
    runProgram(num1,num2,num3,desc_order);


    return 0;
}