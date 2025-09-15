/* 
Mehedi Mithu
sep 15, 2025
lab 6 ,nested conditional statement and switch
*/

#include<iostream>
#include<string>

using namespace std;


int main(){
cout<<"\n ------ example1: nested conditional statement -----"<<endl;
int n = 5;
if (n>0){
    if(n%2==0){
    cout<<"The Number is positive and Even"<<endl;
    }
    else{
        cout<<"The number is positive and ODD"<<endl;
    }
}
else if (n<0){
    if(n%2==0){
    cout<<" The Number is Negative"<<endl;
    }
    else {
        cout<<"The Number is Negative and Even"<<endl;
    }
}
else{
    cout<<"The Number is zero"<<endl;

}

cout<<"\n ------ Example 2: organize three numbers in decreasing order -----"<<endl;
// declare the identifiers (variables names)
int num1, num2, num3;

// display a message and collect the three numbers

cout<<"Enter three numbers:";
cin>>num1>>num2>>num3;

// check if num1 is greater than num2 and num3
if (num1>num2 && num1>num3){
    if(num2>num3)
    cout<<num1<<"\t"<<num2<<"\t"<<num3<<endl;
    else
    cout<<num1<<"\t"<<num3<<"\t"<<num2<<endl;

}
// check if the num2 is the greatest
else  if (num2>num1 && num2>num3 ){
    if (num1>num3)
    cout<<num2<<"\t"<<num1<<"\t"<<num3<<endl;
    else 
    cout<<num2<<"\t"<<num3<<"\t"<<num1<<endl;

}
// check if the num3 is the greatest
else if (num3>num2 && num3>num1){

}
else{
    cout<<"All three numbers are the same!"<<endl;
}


cout<<"\n ------ Example 3: swith -------"<<endl;
// select a day-off using switch-case statement
int dayoff;
cout<<"Select a day-off: "<<endl;
cout<<"1 for Monday"<<endl;
cout<<"2 for Tuesday"<<endl;
Cout<<"3 for Wednesday"<<endl;
cout<<"4 for Thursday"<<endl;
cout<<"5 for friday"<<endl;
cin>>dayoff;

switch (dayoff)
{
    case 1:
    cout<<"you are off on Monday"<<endl;
    break;
     case 2
    cout<<"you are off on Tuesday"<<endl;
    break;
     case 3:
    cout<<"you are off on Wednesday"<<endl;
    break;

     case 4:
    cout<<"you are off on Thursday"<<endl;
    break;
     case 5:
    cout<<"you are off on Friday"<<endl;
    break;
    default: 
    cout<<"unable to read the day-off"
    break;
}


cout<<"\n ------ Example 4: switch to select a gender ----"<<endl;

char gender=' ';
cout<<"select a gender: "<<endl;
cout<<"m or M for male"<<endl;
cout<<"f or F for female"<<endl;
cout<<"o or O for others"<<endl;
ci>>gender;

switch (gender)
{
    case 'm': case 'M':
    cout<<"Gender = MALE"<<endl;
    break;
    case 'f' : case 'F':
    cout<<"Gender = FEMALE"<<endl;
    break;
    case 'O' : case 'O':
    cout<<"GENDER = OTHERS"<<endl;
    break;
    default:
    cout<<"GENDER = UNDEFINED"<<endl;
    break;
}




cout<<"\n ------ Exercise1 -----"<<endl;
    double savings;

    cout << "Enter the amount of money in your savings: $";
    cin >> savings;

    if (savings < 0) {
        cout << "Have some savings!" << endl;
    }
    else if (savings < 200000) {
        cout << "Keep saving!" << endl;
    }
    else if (savings <= 500000) {
        cout << "With $" << savings << " you can afford an apartment or co-op." << endl;
        // nested condition
        if (savings <= 300000) {
            cout << "Specifically, you can get a Studio." << endl;
        }
        else if (savings <= 400000) {
            cout << "Specifically, you can get 1 BR + 1 Bath." << endl;
        }
        else {
            cout << "Specifically, you can get 2 BRs + 1 Bath." << endl;
        }
    }
    else if (savings <= 1000000) {
        cout << "With $" << savings << " you can afford a house." << endl;
        // nested condition
        if (savings <= 700000) {
            cout << "Specifically, you can get 2 BRs + 2 Baths." << endl;
        }
        else {
            cout << "Specifically, you can get 3 BRs + 3 Baths." << endl;
        }
    }
    else {
        cout << "With $" << savings << " you can afford a Mansion." << endl;
    }




    cout<<"\n ------ Exercise2 -----"<<endl;
    int number;
    char choice;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Do you want to double the number? (Y/N): ";
    cin >> choice;

    switch (choice) {
        case 'Y':
        case 'y':
            number *= 2;   // double the number
            break;
        case 'N':
        case 'n':
            // keep number as is
            break;
        default:
            number = 0;    // reset to zero
    }

    cout << "The number is set to " << number << endl;


    return 0;
}