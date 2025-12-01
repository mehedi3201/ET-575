/*
Mehedi Mithu
HW 10: file streaming
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

ifstream fin;
ofstream fout;

void readfile(string filename)
{
    fin.open(filename);
    string line;
    while (getline(fin, line))
    {
        cout << line << endl;
    }
    fin.close();
}

void countwords(string filename)
{
    fin.open(filename);
    int count = 0;
    string word;
    while (fin >> word)
    {
        count++ ;  
    }
    fin.close();

    fout.open("wordcounts.txt");
    fout << "Mehedi Mithu" << endl;
    fout << "Total number of words: " << count << endl;
    fout.close();
}

void countEarth(string filename)
{
    fin.open(filename);
    int count = 0;
    string word;
    while (fin >> word)
    {
        if (word == "Earth" || word == "Earth,")
            count++;
    }
    fin.close();

    fout.open("wordcounts.txt", ios::app);
    fout << "The word 'Earth' appears " << count << " times in the document." << endl;
    fout.close();
}