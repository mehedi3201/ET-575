/*
Mehedi Mithu
Homework 8, 2D array
*/

#include<iostream> 

using namespace std; 
const int ARRAY_SIZE = 4;

// define a function to search for a value in a 2D array 
void search_2D_array(int arr[ARRAY_SIZE][ARRAY_SIZE], int target, int result[2]){
    result[0] = -1;
    result[1] = -1;

    for (int row = 0; row < ARRAY_SIZE; row++){
        for (int col = 0; col < ARRAY_SIZE; col++){
            if (arr[row][col] == target){
                result[0] = row;
                result[1] = col;
                return;
            }
        }
    }
    // value was not found result set to -1
}

// define a function to display a message 
void display_message(int row, int col, int target){
    if (row == -1 && col == -1){
        cout << "Number " << target << " was not found" << endl;
    }
    else{
        cout << "Number " << target << " was found in row " << row << " and column " << col << endl;
    }
}