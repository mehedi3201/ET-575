#include <iostream>
using namespace std;

int main() 
{
    cout << "-----Example 1: cout data ------"<<endl;
    cout<<"This is a C++ code"<<endl;
    // variables = temporary storage of data
    // declare the variable first
    string username  = "peterpan123";
    cout<<"\nWelcome to C++ \t\t "<<username<<endl;
    
    cout << "-----Example 2: cin data ------"<<endl;
    cout<<"Enter a new username "<<endl;
    cin >> username;
    cout<<"New user is "<<username<<endl;
    

    
    return 0;
}