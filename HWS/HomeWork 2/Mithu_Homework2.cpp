/*
Homework 2: Branching

Mehedi Mithu
*/


#include <iostream>
#include <string>

using namespace std;

int main(){
    cout<<"----- Program 1: Age eligibility -----"<< endl;
    // declare varibles
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    //determines their eligibility for various activities:
    if(age>0 && age<13){
        cout<<"Not eligible for any activities."<<endl;
    }
    else if(age>=13 && age<=17){
        cout<<"Eligible for youth activities."<<endl;
    }
    else if(age>=18 && age<=64){
        cout<<"Eligible for adult activities."<<endl;
    }
    else if(age>=65){
        cout<<"Eligible for senior activities."<<endl;
    }
    else{
        cout<<"Invalid age. Please enter a vaild age."<<endl;
    }

    cout<<"\n----- Program 2: nested conditional statements -----"<< endl;
    // declare two variables
    int num1,num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    //add two numbers and display a message according to the sum: 
    int sum = num1 + num2;
    if(sum<0){
        cout<<"False alarm! The sum is "<<sum<<endl;
    }
    else if(sum>=1 && sum<=100){
        if(sum%5==0)
            cout<<sum<<" is a pentagon."<<endl;
        else if(sum%2!=0)
            cout<<sum<<" is am odd guess."<<endl;
        else
            cout<<sum<<" is in range 1-100."<<endl;
    }
    else if(sum>=101 && sum<=200)
        cout<<"The new lucky number is "<<sum<<endl;
    else if(sum>=201 && sum<=999)
        cout<<sum<<" is a dreaming number."<<endl;
    else
        if(sum%2==0)
            cout<<sum<<" approaches to the infinite evenly!"<<endl;
        else if(sum<=2000)
            cout<<sum<<" is in range 1000-2000."<<endl;
        else
            cout<<sum<<" approaches to the infinite and beyond!"<<endl;
    
    cout<<"\n----- Program 3: temperature converter  -----"<< endl;
    // declare the identifiers
    int choice;
    float temp, result;
    cout<<"Select your options: "<<endl;
    cout<<"1.Celsius to Fahrenheit"<<endl;
    cout<<"2.Fahrenheit to Celsius"<<endl;
    cout<<"3.Kelvin to Celsius"<<endl;
    cout<<"4.Kelvin to Fahrenheit"<<endl;
    cout<<"5.Exit"<<endl;
    cout << "Enter your choice (1-5): ";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout << "Enter temperature in Celsius: ";
            cin >> temp;
            result = (temp * 9.0/5.0) +32;
            cout<<temp<<" Celsius is equal to "<<result<<" Fahrenheit."<<endl;
            break;
        case 2:
            cout << "Enter temperature in Fahrenheit: ";
            cin >> temp;
            result = (temp-32)*(5.0/9.0);
            cout<<temp<<" Fahrenheit is equal to "<<result<<" Celsius."<<endl;
            break;
        case 3:
            cout << "Enter temperature in Kelvin: ";
            cin >> temp;
            result = temp - 273.15;
            cout<<temp<<" Kelvin is equal to "<<result<<" Celsius."<<endl;
            break;
        case 4:
            cout << "Enter temperature in Kelvin: ";
            cin >> temp;
            result = (temp - 273.15) * (9.0/5.0) + 32;
            cout<<temp<<" Kelvin is equal to "<<result<<" Fahrenheit."<<endl;
            break;
        case 5:
            cout << "Exiting the program." << endl;
            break;
        default:
            cout << "Invalid choice. Please select a valid option." << endl;
            break;
    }


    return 0;
}
