/*
Mehedi Mithu
October 24, 2025
lab 12: scoping and predefined functions
*/

#include <iostream>

using namespace std;

// example 1: function that calculates and return the sun of two numbers
int add(int num1, int num2){
    int sum = num1 + num2; // sum is a local variable in function add()
        cout<<"The sum in function add() is \t"<<sum<<endl;
            return sum;
            }
            
            // example 3:c++ predefine functions
            // function passes two arguments, calculate and return the hypotenuse
            #include <cmath>
            float hyp(float side1, float side2){
                return sqrt(pow(side1,2)+pow(side2,2));
                }
                
                // function to print result
                void printhyp(float s1, float s2, float h){
                    cout<<"The hypotenuse of sides "<<s1<<" and " << s2 << " is "<< h << endl;
                        return;
                        }
                        
                        // Excercise:
                        
                        // function to colleget a number greater than 0
                        float getNumber(){
                            float number;
                                do{
                                        cout<<"Please enter a number greater than 0: ";
                                                cin>>number;
                                                        if(0>=number){
                                                                    cout<<"Invaild input, number should greater than 0" << endl;
                                                                            }
                                                                                } while(number <= 0);
                                                                                    return number;
                                                                                    }
                                                                                    
                                                                                    // function to calculate the distance for four point
                                                                                    float distance(float x1, float y1, float x2, float y2){
                                                                                        return sqrt(pow(x2-x1,2)+ pow(y2-y1,2));
                                                                                        }
                                                                                        
                                                                                        // function to print the result
                                                                                        void printDistance(float x1, float y1, float x2, float y2, float d){
                                                                                            cout<<"The distance of points (" << x1 << "," << x2 << ") and (" <<y1<<","<<y2<< ") is "<< d <<endl;
                                                                                                return;
                                                                                                }
                                                                        