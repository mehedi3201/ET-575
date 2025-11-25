/*
Mehedi Mithu
Nov 24, 2025
Lab 19: Files and consle input
*/

#include <iostream>
#include <fstream> // for file operations

using namespace std;

// Example 1: Consle input failure
// function to check if num values is the proper data type
void checknumber(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (cin.fail()){
        cout << "Error! input dismatched data type." << endl;
        num = -1;
    }
    else{
        cout << "You entered =  " << num << endl;
    }

    // clear the cin state
    cin.clear();
    cin.ignore(10000, '\n');

    cout << "END OF FUNCTION. Number = " << num << endl;
}

// example 2: console input to vaildate an input data type
float vaidatenumber(){
    float n;
    bool isNotVaild = false;

    do{
        cout << "Enter a number: ";
        cin >> n;
        isNotVaild = cin.fail();
        cin.clear();
        cin.ignore(10000, '\n');

    }while(isNotVaild);

    return n;
}

// example 3: set object for input and output files
ifstream fin; // declare input file as 'fin'
ofstream fout; // declare output file as 'fout'

void readfile(string filename){
    fin.open(filename);

    // varible 'line' is used to store each line of samplefile.txt
    string line;
    
    // loop through each line in samplefile.txt
    int linecounter = 1;
    while(getline(fin, line)){
        cout << "Line " << linecounter << '\t' << line << endl;
        linecounter++;
    }

    // close file
    fin.close();
}

// Example 4: writing a file
// fout will write in a new or existing file. fout overwrite all the content of an existing file.
void writefile(string filename){
    fout.open(filename);

    // Write some content
    for (int n = 1; n <= 3; n++){
        fout << "Good morning " << n << endl;
    }

    // close file
    fout.close();
}

// Example 5 : append data into a file
void appendfile(string filename){
    fout.open(filename, ios::app);

    // append
    fout << "\n-----APPEND-----" << endl;
    for (int n = 3; n > 0; n--){
        fout << n << endl;
    }
    // Write a single line
    fout << "GAME OVER!" << endl;

    // close file
    fout.close();
}

// EXERCISE:
// Function 1: create a file named 'data_user.txt'
void creatfile(string filename){
    fout.open(filename);
    fout << "This is my output file – Mehedi Mithu" << endl;
    fout.close();
}

// Function 2: append a new message to 'data_user.txt'
void appendfile_exercise(string filename, string msg){
    fout.open("data_user.txt", ios::app);
    fout << msg << endl;
    fout.close();
}

// Function 3: read and display the content of 'data_user.txt'
void read_file_exercise(string filename){
    fin.open(filename);
    string line;

    while(getline(fin, line)){
        cout << line << endl;
    }
    fin.close();
}