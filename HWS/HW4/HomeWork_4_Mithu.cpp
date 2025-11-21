/*
Mehedi Mithu
Homework 4: Loops
*/

#include <iostream>
using namespace std;

int main(){
    cout<<"------Question 1------"<<endl;
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    do{
        if(num<10){
            cout<<num<<" is invaild!"<<endl;
            cout<<"Please enter a number greater than or equal to 10: ";
            cin>>num;
        }
        
    }
    while(num<10);
    cout<<num<<" is a vaild number!"<<endl;

    cout<<"------Question 2------"<<endl;
    int num1, num2;
    int max,min;
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;
    if(num1 > num2){
        max = num1;
        min = num2;
    }
    else{
        max = num2;
        min = num1;
    }
    while(min<=max){
        cout<<min<<" ";
        min++;
    }
    cout<<endl;

    cout<<"------Question 3------"<<endl;
    int dimension = 11;
    for(int row=1; row<=dimension; row++){
        for(int col=1; col<=dimension; col++){
            if((5>=col && col>=4 && 10>=row && row>=3)|| (8>=col && col>=6 && 5>=row && row>=4)){
                cout<<" # ";
            }
            else{
                cout<<" . ";
            }
        }
        cout<<endl;
    }

    return 0;
}