/*
Mehedi Mithu

Nov 24, 2025
Lab 19: Files and consle input
*/

#include <iostream>
#include "Lab19_function_Mithu.cpp"

using namespace std;

int main(){
    cout << "\n ----- Example 1: Consle input failure -----" << endl;
    checknumber();

    cout << "\n ----- Example 2: Consle input failure in loop -----" << endl;
    cout << "Validated number = " << vaidatenumber() << endl;

    cout << "\n ----- Example 3: reading a file -----" << endl;
    readfile("samplefile.txt");

    cout << "\n ----- Example 4: writting content into a file -----" << endl;
    writefile("outputfile.txt");

    cout << "\n ----- Example 5: append data into a file -----" << endl;
    appendfile("samplefile.txt");

    cout << "\n ----- EXERCISE -----" << endl;
    creatfile("data_user.txt");
    appendfile_exercise("data_user.txt", "APPENDED LINE 1");
    read_file_exercise("data_user.txt");

    return 0;
}