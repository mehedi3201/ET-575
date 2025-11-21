/*
Mehedi Mithu
Nov 19, 2025
lab 17, 2D array
*/

#include <iostream>
#include <time.h>
#include "lab17_function_mithu.cpp"
using namespace std;

int main(){
    cout << "\n ----- Example 1: array declaration ----- " << endl;
    array_dec();

    cout << "\n ----- Example 2: print each value in a 2D array  ----- " << endl;
    const int NUMCOLS = 5;
    int arr[3][NUMCOLS] = {
        {5, 10},
        {-2, -9},
        {6}
    };

    print_2D_array(arr, 3);

    cout << "\n ----- Example 3: populating an array with numbers  ----- " << endl;
    // declare a 2D array
    int arr_num[2][3];

    // call the function
    populate_array(arr_num, 2, 3);
    print_array(arr_num, 2, 3);

    cout << "\n ----- Example 4: sum of all numbers in a 2D array  ----- " << endl;
    int s = sum_all(arr_num, 2, 3);
    cout << "The total sum is: " << s << endl;

    cout << "\n ----- Example 5: odd numbers in a 2D array  ----- " << endl;
    int c = total_odd(arr_num, 2, 3);
    cout << "Total odd numbers =  " << c << endl;

    cout << "\n ----- EXCERSICE  ----- " << endl;
    srand(time(0));
    int array_random[3][4];
    do{
        random_populate(array_random, 3, 4);
        print_random_array(array_random, 3, 4);
        float a = average(array_random, 3, 4);
        cout << "Average is = " << a << endl;
        
        char c;
        cout << "Another run? (y/n): ";
        cin >> c;
        if(c == 'n' || c == 'N'){
            break;
        }

    }while(true);
    return 0;
}