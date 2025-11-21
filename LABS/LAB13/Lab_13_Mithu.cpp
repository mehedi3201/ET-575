/*
Mehedi Mithu
Oct 27, 2025
lab 13: random variables
*/

#include <iostream>
#include "lab13_function_Li.cpp"
#include <time.h>

using namespace std;

int main(){
    srand(time(0));
    
    cout<<"\n ----- Example 1: random number -----" << endl;
    int r = random_number();
    cout << "random number: " << r << endl;
    cout << "random number: " << random_number() << endl;
    
    cout<<"\n ----- Example 2: different random number -----" << endl;
    int diff_random = different_random();
    cout << "Different random number: " << diff_random << endl;

    cout<<"\n ----- Example 3: random bumber between 0 and 9 -----" << endl;
    int r_0_9 = random_0_9();
    cout << "Random number between 0 and 9: " <<r_0_9 << endl;
    
    cout << "\n ----- Example 4 : random number between -10 and 5 -----" << endl;
    cout << "Number between -10 and 5: "<<random_neg10_5() << endl;


    cout << "\n ----- Exercise ------" << endl;
    // call function that generates a number between 1 and 6
    int run1 = random_1_6();
    int run2 = random_1_6();

    // call function to check for snake_eyes
    bool result = compare_ones(run1, run2);

    // call functions to print result
    prompt_result(result);

    return 0;
}