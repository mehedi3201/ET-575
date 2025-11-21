/*
Mehedi Mithu
Oct 26, 2025
Homework 5, functions
*/

#include <iostream>
#include <cmath>

using namespace std;

// Prgram 1 : Wind Chill calculation
int speed(){
    int s;
    do{
        cout<<"Enter a wind speed: ";
        cin>>s;
        if(s <= 0 || s >= 100){
            cout<<"wind speed should be a postive number less than 100";
        }
    }while(s <= 0 || s >= 100);
    return s;
}

int temp(){
    int t;
    do{
        cout<<"Enter temperature: ";
        cin>>t;
        if(t>10 || t <= -90){
            cout<<"Temperture should less or equal to 10 and greater than -90" << endl;
        }
    }while(t>10 || t <= -90);
    return t;
}

float windspeed(int v, int tem){
    float w = 33 - (10 * sqrt(v) - v + 10.5) * (33 - tem); 
    return w;
}

void prompt_result(float w_speed){
    cout<<"The wind index is: "<< w_speed <<endl;
    return;
}

// Program 2: Descending order entries 

int collectNumber(){
    int num;
    cout<<"Enter a number: ";
    cin >> num;
    return num;
}

bool inOrder(int num1,int num2,int num3){
    if(num1 > num2 && num2 > num3){
        return true;
    }
    else{
        return false;
    }
}

void runProgram(int num1, int num2, int num3, bool desc_order){
    char choice;
    if(desc_order){
        cout<<"The numbers "<< num1 << " , " << num2 << " , " << num3 << " are in descending order." << endl; 
    }
    else{
        cout<<"The numbers " << num1 << ", " << num2 << ", and " << num3 << " are NOT in descending order." << endl;
    }

    cout << "Do you want to run the program agian? (y/n): ";
    cin>>choice;
    if (choice == 'Y' || choice == 'y') {
        int n1 = collectNumber();
        int n2 = collectNumber();
        int n3 = collectNumber();
        bool again_desc = inOrder(n1, n2, n3);
        runProgram(n1, n2, n3, again_desc);
    } else {
        cout << "Program ended." << endl;
    }     
    return;
}