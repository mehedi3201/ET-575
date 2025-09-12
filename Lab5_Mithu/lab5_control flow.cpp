/*
Mehedi Mithu
lab 5, control flow
Sep 10, 2025
*/
#include <iostream>
#include <string>

using namespace std;

int main(){

    cout<<"\n ----- Example 1: boool variable ----- " << endl;
    //check if a number is positive
    // step 1) declare and collecr a number
    int n;
    cout << "Enter an number: ";
    cin >> n;
    // step 2) check if the number is positive
    bool checkPositive = (n >= 0);
    // step 3) print the result
    cout<<"Is "<<n<<" positive? "<<checkPositive<<endl;

    cout<<"\n ----- Example 2: if statement ----- " << endl;
    //change the checking_code if a number is positive
    int checking_code = 111;
    if(n>=0){
        checking_code = 999;
    }
    cout<<"checking_code = " << checking_code << endl;

    cout<<"\n ----- Example 3: if-else statement ----- " << endl;
    // check if a number is even or odd
    if(n%2 == 0){
        cout<<n<<" is EVEN"<<endl;
    } 
    else {
        cout<<n<<" is ODD"<<endl;
    }
    cout<<"\n ----- Example 4: if-else statment ----- " << endl;
    // absoulue value
    if(n>0){
        cout<<n<<" is positive"<<endl;
    }
    else{
        cout<<n<<" is positive"<<endl;
        n*=-1;
        cout<<"The absolute value is "<<n<<endl;
    }
    cout<<"\n ----- Example 5: mutiway statment ----- " << endl;
    // select the color according to a wavelength
    int wavelength = 0;
    string emitted_color = "";
    cout << "Enter a wave length: ";
    cin>>wavelength;
    //mutiway conditional statement
    if(0<=wavelength && wavelength<=379)
        emitted_color = "ultraviolet";
    else if(380<=wavelength && wavelength<=520)
        emitted_color = "blue";
    else if(521<=wavelength && wavelength<=590)
        emitted_color = "green";
    else if(591<=wavelength && wavelength<=740)
        emitted_color = "red";
    else if(wavelength>=741)
        emitted_color = "infrared";
    else
        emitted_color = "unable to read";
    //  print the result
    cout << "The emitted color if wavelength " << wavelength << " is " << emitted_color << endl; 


    cout<<"\n ----- Exercise: ----- " << endl;
    // declare variables
    float hw_grade;
    float lab_grade;
    float final_exam;
    string gpa = "";

    // collect the value for labs, homework, and final exam
    cout<<"Enter your homework grade: ";
    cin>>hw_grade;
    cout<<"Enter your lab grade: ";
    cin>>lab_grade;
    cout<<"Enter your final exam grade: ";
    cin>>final_exam;

    // calculate the final grade
    float grade = (final_exam*0.5)+(lab_grade*0.3)+(hw_grade*0.2);


    // multiway conditional statement
    cout << "Your final grade is "<<grade<<endl;
    if(90<=grade && grade<=100)
        gpa = "A";
    else if(80<=grade && grade<=89)
       gpa = "B";

    else if(70<=grade && grade<=79)
        gpa = "C";

    else if(60<=grade && grade<=69)
        gpa = "D";

    else if(grade<=59)
       gpa = "F";
    else
        cout << "Retry, unable to calculate your grade" << endl;
    
    // print the result
    cout<<"A final grade of "<<grade<<" is equivalent to GPA of "<<gpa<<endl;
}