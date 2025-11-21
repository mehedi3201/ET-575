/*
Mehedi Mithu
HW 7, loop in an array
*/

#include <iostream>
#include <cstdlib>

using namespace std;

//function to collect the size of an array 

int collect_size(){
    int s;
    cout << "Enter the size of the array: ";
    cin >> s;
    return s;  
}

//function to populate an array 
void populate_numbers(int ar[], int s){ 
    // use loop to RANDOMLY generates number between 1 and 99 
    for (int i = 0; i < s; i++){
        ar[i] = rand() % 99 + 1;
    }
} 

//function to print all numbers in an array 
void print_numbers(int ar[], int s){ 
    // use loop to print all numbers in an array 
    for(int i = 0; i < s; i++){
        cout << ar[i] << "\t";
    }
    cout << endl;
} 

//function to find the minimum number in an array 
int array_min(int ar[], int s) 
{ 
    int min_val = ar[0];
    for (int i = 1; i < s; i++){
        if (ar[i] < min_val){
            min_val = ar[i];
        }
    }
    return min_val;
} 

//function to return the average of all numbers in an array 
float array_avg(int ar[], int s) 
{   
    float sum = 0;
    for (int i = 0; i < s; i++){
        sum += ar[i];
    }
    return sum / s;
    

} 