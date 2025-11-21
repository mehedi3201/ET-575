/*
Mehedi Mithu
Nov 19, 2025
lab 17, 2D array
*/

#include <iostream>
#include <cstdlib> // for rand and srand

using namespace std;

// Example 1: declaring a 2D array
void array_dec()
{
    int array[3][5] = {
        {5,10,15,20,25}, // row 0
        {-2, -9, -1, -5, -6}, // row 1
        {6, 0, 7, 9, 6} // row 2
    };

    cout << "3rd element in 2nd row: " << array[1][2] << endl;
}

// Example 2: function to print each valuenin a 2D array
const int NUMCOLS = 5;
void print_2D_array(int a[][NUMCOLS], int rowsize){
    for(int row = 0; row < rowsize; row++)
    {
        for(int col = 0; col < NUMCOLS; col++)
        {
            cout << a[row][col] << "\t";
        }
        cout << endl;
    }
}

// Example 3: define a function to populate a 2D array
void populate_array(int arr[][3], int rowsize, int colsize){
    for(int row = 0; row < rowsize; row++){
        for (int col = 0; col < colsize; col++){
            int n;
            cout << "Enter a number: ";
            cin >> n;
            arr[row][col] = n; 
        }
    }
}

void print_array(int array[][3], int rowsize, int colsize){
    for(int row = 0; row < rowsize; row++){
        for (int col = 0; col < colsize; col++){
            cout << array[row][col] << "\t";
        }
        cout << endl;
    }
}

// Example 4: function that sum all the numbers in a 2D array and returns the total sum
int sum_all(int arr[][3], int rowsize, int colsize){
    int sum = 0;
    for(int row = 0; row < rowsize; row++){
        for (int col = 0; col < colsize; col++){
            sum += arr[row][col];
        }
    }
    return sum;
}

// Example 5: function that returns the total of odd numbers in a 2D array
int total_odd(int arr[][3], int rowsize, int colsize){
    int counter_odd = 0;
    for (int row = 0; row < rowsize; row++){
        for (int col = 0; col < colsize; col++){
            if (arr[row][col] % 2 == 1 && arr[row][col] != 0){
                counter_odd ++;
            }
        }
    }
    return counter_odd;
}

// EXERCISE
void random_populate(int arr[3][4], int rowsize, int colsize){
    for(int row = 0; row < rowsize; row++){
        for (int col = 0; col < colsize; col++){
            arr[row][col] = rand() % 101;
        }
    }
}

void print_random_array(int array[3][4], int rowsize, int colsize){
    for(int row = 0; row < rowsize; row++){
        for (int col = 0; col < colsize; col++){
            cout << array[row][col] << "\t";
        }
        cout << endl;
    }
}

float average(int arr[3][4], int rowsize, int colsize){
    int count = 0;
    int sum = 0;
    for(int row = 0; row < rowsize; row++){
        for (int col = 0; col < colsize; col++){
            sum += arr [row][col];
            count ++;
        }
    }
    return (float)sum / count;
}