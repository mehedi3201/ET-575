/*
Mehedi Mithu
Homework 9 – Arrays  applications
*/

#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

// function to collect array size from user range [1, 100]
int arraysize(){
    int size;
    do
    {
        cout << "Enter an array size between 1 and 100: ";
        cin >> size;
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(10000, '\n');
        }

    }while(size < 1 || size > 100);

    return size;
}

// This function will randomly generate numbers between 10 and 30
void randPopulate(int* arr, int size)
{   
    srand(time(0));
    for (int i = 0; i < size; i++)
    {
        arr[i] = 10 + rand() % 21;
    }
}

// This function will print the values in each cell of the noise[] array.
void print(int *arr, int size) 
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

// This function will reverse the order of the values
void reverse(int *arr, int size)
{   
    for (int i = 0; i < size/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}
