/*
Mehedi Mithu
Nov 26, 2025
Lab 18: Arrays Application
*/

#include <iostream>

using namespace std;


//Collects 5 user-entered non-zero integers stores in a array. 
int collectnumber(int* arr)
{
    int count = 0;
    while (count < 5){
        int num;
        cout << "Enter a number (0 to stop): ";
        cin >> num;
        if (num == 0){

            break;
        }
        else{
            arr[count] = num;
            count++;
        }
    }
    return count;
}

float Averagenumber(int* arr, int size)
{   
    if (size == 0)
        return 0.0;

    float sum = 0;
    for (int i = 0; i < size; i++){
        sum += arr[i];
    }

    return sum / size;
}

int Closestmean(int* arr, int size, float average)
{   
    if (size == 0)
        return 0;

    int closest = arr[0];
    float min_diff;

    if (arr[0] > average)
        min_diff = arr[0] - average;
    else
        min_diff = average - arr[0];
    
    for (int i = 1; i < size; i++)
    {   
        if (arr[i] > average)
        {
            if (arr[i] - average < min_diff)
            {
                min_diff = arr[i] - average;
                closest = arr[i];
            }
        }
        else
        {
            if (average - arr[i] < min_diff)
            {
                min_diff = average - arr[i];
                closest = arr[i];
            }
        }
    }
    return closest;

}

void Printresult(float average, int closest)
{
    cout << "The closest number to average " << average << " is " << closest << endl;  
}