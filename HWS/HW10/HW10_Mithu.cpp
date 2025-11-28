/*
Mehedi Mithu
HW 10: file streaming
*/

#include <iostream>
#include "Hw10_Function.cpp"

using namespace std;

int main()
{   
    string file_name = "Remembering_Earth.txt";
    readfile(file_name);
    countwords(file_name);
    countEarth(file_name);

    return 0;
}