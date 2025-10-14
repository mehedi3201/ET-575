/*
Mehedi Mithu
Oct 14, 2025
lab 9, while, do-while loop
*/
#include <iostream>
using namespace std;

int main()
{
    cout << "\n-----Example 1: while loop as a counter------" << endl;
    //print from 1 to 5
    int n = 1;
    while(n<=5){
        cout << n << " ";
        n++;
    }

    cout<<"\n-----Example 2: while loop as a counter"<<endl;
    //print from 3 to 0
    int m = 3;
    while(m>=0){
        cout<<m<<" ";
        m--;
    }
    cout<<endl;

    cout<<"\n-----Example 3: while loop as a decrement counter"<<endl;
    m = 3;
    while(m-- >= 0){
        cout<<m<<" ";
    }
    cout<<endl;

    cout<<"\n-----Example 4: while loop as a decrement counter"<<endl;
    m = 3;
    while(--m >= 0){
        cout<<m<<" ";
    }
    cout<<endl;

    cout<<"\n-----Example 5: while loop to validate a number-----"<<endl;
    int num;
    cout<<"Enter a number between 10 and 20 inclusive: ";
    cin >> num;

    // if the number is not between 10 and 20, use a while loop to recollect the number
    while(!(num >= 10 && num<=20)){
        cout<<"Invalid input! Enter a number between 10 and 20 agin: ";
        cin >> num;
    }
    cout << "The entered number is " << num << endl;

    cout<<"\n-----Example 6: do-while loop to validate a number-----"<<endl;
    do{
    cout<<"Enter a number between 10 and 20 inclusive: ";
    cin >> num;
    }
    while(!(num >= 10 && num<=20));

    cout<<"End of do-while loop. Enter number = " << num << endl;


    cout << "\n-----Example7 7: dp-while loop to validate a number-----"<<endl;
    // do-while to run the program again
    // program checks if a number is positive, negative or zero.
    int number;
    char choice = 'y';
    do{
        cout<<"Enter a number: ";
        cin >> number;
        if (number == 0)
        {
            cout<<"The number is zero."<<endl;
        }
        else if (number > 0)
        {
            cout<<"The number is positive."<<endl;
        }
        else
        {
            cout<<"The number is negative."<<endl;
        }

        cout<<"Do you want to check another number?(y/n) ";
        cin>> choice;   
    }
    while(choice=='y' || choice == 'Y');

    cout<<"\n-----Example 8: do-while loop set tp True-----"<<endl;
    n = 0;
    int sum_positive = 0;
    do{
        cout<<"Enter a positive number: ";
        cin>>n;
        if(n>=0){
            sum_positive += n;
        }
        else{
            break;
        }
    }
    while(true);
    cout<<"The total sum of positive numbers is: "<<sum_positive<<endl;

    cout <<"\n----- Example 9: withdraw from a bank account -----" << endl;
    int balance = 1000;
    int w = 0;

    while(true){
        cout << "How much do you want to withdraw? ";
        cin>>w;

        if(w>balance){
            cout<<"Can't withdrawn "<< w<<". Enter another amount. ";

        }
        else{
            balance -= w;
            cout<<"Withdrawed $"<<w<<" The new balance "<<balance << endl;
            break;
        }
    }
    cout<<"Thank you for banking with us!"<<endl;

    cout<<"\n ----- Example 10: Continue statement -----"<<endl;
    // while loop to print and add nuumbers
    int sum_all = 0;
    int x = 0;
    while(x++ < 10){
        cout<<x<<" ";
        if(x==5){
            continue;
        }
        else
            sum_all += x;
    }
    cout<<"The total sum of numbers = "<<sum_all<<endl;
    
    cout << "\n-----Exercise------"<<endl;
    int sum = 0;
    int num2;
    
    // Add num to sum until user enters 0
    do{
        cout<< "Enter a number (0 to END): ";
        cin >> num2;
        sum += num2;
    }
    while(num2 != 0);
    cout << "The total sum is: " << sum << endl;

    return 0;
}