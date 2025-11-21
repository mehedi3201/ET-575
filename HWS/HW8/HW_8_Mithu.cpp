/*
Mehedi_Mithu
Homework 8, 2D array
*/

#include<iostream> 
#include "HW_8_Function.cpp"

using namespace std;

const int ROWCOL_ARRAY = 4;
int main(){ 
    int arr[ROWCOL_ARRAY][ROWCOL_ARRAY];
    int targetValue;
    int result[2]; // Array to store row and column index
    
    for (int row = 0; row < ROWCOL_ARRAY; row++){
        for (int col = 0; col < ROWCOL_ARRAY; col++){
            cout << "Enter number for 4-by-4 array: ";
            cin >> arr[row][col];
        }
    }
    // Ask for a specific value to search for
    cout << "Enter target value: ";
    cin >> targetValue;

    // call function to search for a value in a 2D array 
    search_2D_array(arr, targetValue, result);

    // call function to display a message 
    display_message(result[0], result[1], targetValue);
 

    return 0; 

} 