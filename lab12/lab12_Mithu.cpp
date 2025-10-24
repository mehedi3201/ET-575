/*
Mehedi Mithu
October 24, 2025
lab 12: scoping and predefined functions
*/

#include <iostream>
using namespace std;

// global variable
int num = 8;

void doSomething(){
    // global varible
        num += 20;
            cout<<"num in doSomething() function: "<< num << endl;
                return;
                }
                
                #include "lab12_function.cpp"
                
                
                int main(){
                    cout<<"\n-----Example 1: local varibles ------"<<endl;
                        int sum = add(2,7) + add(1,6); // sum is a local varibles in main() function
                            cout<<"The total sum in main() is \t"<<sum<<endl;
                            
                                cout<<"\n-----Example 2: global varibles ------"<<endl;
                                    cout<<"num original value = \t"<<num<<endl;
                                        doSomething();
                                            num = 5;
                                                cout<<"num in main function = \t"<<num<<endl;
                                                
                                                    cout<<"\n-----Example 3: hypotenuse ------"<<endl;
                                                        float s1 = 2;
                                                            float s2 = 3;
                                                                float h = hyp(s1,s2);
                                                                
                                                                    printhyp(s1,s2,h);
                                                                    
                                                                        cout<<"-----Excercise -----"<< endl;
                                                                            // call 1st function
                                                                                cout<<"Enter coordinates for Point 1: "<< endl;
                                                                                    int x1 = getNumber();
                                                                                        int y1 = getNumber();
                                                                                            cout<<"Enter coordinates for Point 2: "<<endl;
                                                                                                int x2 = getNumber();
                                                                                                    int y2 = getNumber();
                                                                                                    
                                                                                                        // call 2nd function
                                                                                                            float d = distance(x1,y1,x2,y2);
                                                                                                            
                                                                                                                // call 3rd function
                                                                                                                    printDistance(x1,y1,x2,y2,d);
                                                                                                                    
                                                                                                                        return 0;
                                                                                                                        }