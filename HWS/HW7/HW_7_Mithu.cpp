/*
Mehedi Mithu
HW 7, loop in an array
*/

#include <iostream>
#include <time.h>
#include "HW_7_Function.cpp"

using namespace std;

int main(){
    srand(time(0)); 
    // declare variable num to save the size of an array 
    int num = collect_size();
    
    // declare an array array_name with size num 
    // initial an array with size num 
    int a[num]; 

    // use loop to ask the user to enter each value of the array 
    populate_numbers(a, num); 
    print_numbers(a, num); 
    cout << "Minimum number: \t" << array_min(a, num) << endl; 
    cout << "Average of numbers: \t" << array_avg(a, num) << endl; 

    return 0;
}