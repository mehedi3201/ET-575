/*
Mehedi Mithu
Homework 3 - for loop
*/

#include <iostream>
using namespace std;

int main(){
    cout<<"------Program 1------"<<endl;
    int num;
    int num_positive = 0;
    int num_negative = 0;
    int num_zero = 0;
    
    cout << "Enter 10 numbers: ";

    for(int i = 1; i<= 10; i++){
        cin >> num;
        if(num > 0){
            num_positive++;
        }
        else if(num<0){
            num_negative++;
        }
        else{
            num_zero++;
        }
    }
    cout<<endl;
    cout<<"Total positive numbers: "<<num_positive<<endl;
    cout<<"Total negative numbers: "<<num_negative<<endl;
    cout<<"Total zeros: "<<num_zero<<endl;

    cout<<"------Program 2------"<<endl;
    int days;
    double sales;
    double total_sales = 0.0;
    cout<<"Enter the number of sales days: ";
    cin>>days;

    for(int i = 1; i<=days; i++){
        cout<<"Total sales for day "<< i<<": $";
        cin>>sales;
        total_sales += sales;
    }
    cout<<endl;

    cout<<"Total sales $"<<total_sales<<" for "<<days<<" days."<<" Average daily sales $"<<total_sales/days<<endl;
    return 0;
}