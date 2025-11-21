/*
Mehedi Mithu
Lab 3 , string and string methods
sep 8, 2025
*/

#include<iostream>
#include<string>

using namespace std;

int main(){
    cout<<"\n ----- Example 1: string indexing -----"<<endl;
    string first_name = "Mehedi";
    cout<<"The 3rd character = "<<first_name[2]<<endl;
    cout<<"The 1st character = "<<first_name.at(0)<<endl;


    cout<<"\n ----- Example 2: amount of character in a string -----"<<endl;
    int characters = first_name.length();
    cout<<"There is "<<characters<<" character/s in "<<first_name<<endl;


    cout<<"\n ----- Example 3: concatenate character/s in a string -----"<<endl;
    string last_name = "Mithu";
    string username = "mehedi320";
    cout<<"comcatenated word = "<<first_name + last_name + username<<endl;

    cout<<"\n ----- Example 4: Substracting characters in a string  -----"<<endl;
    string msg = "Today is a beautiful day!";
    // extract 5 character from the 3rd character
    string subst_char = msg.substr(2,5);
    cout<<"Extracted charactersb= "<<subst_char<<endl;

    cout<<"\n ----- Example 5-----"<<endl;
    // insert the word "maybe"
    msg.insert(5, " maybe");
    cout<<"After insert method = "<<msg<<endl;


    cout<<"\n ----- Example 6: inserting characters to the end of a string -----"<<endl;
    msg.append(" --- by prof. Wu");
    cout<<"After append method = "<<msg<<endl;


    cout<<"\n ----- Example 7: inserting characters to the end of a string  -----"<<endl;
    msg.replace(17,9 ,"bad");
    cout<<"After replace method = "<<msg<<endl;

    cout<<"\n ----- Example 8: erasing characters from a string  -----"<<endl;
    // erase the word 'Today'
    msg.erase(0,5);
    cout<<"After erase method = "<<msg<<endl;

    cout<<"\n ----- Example 9: finding  characters in a string  -----"<<endl;
    // find method returns the index number of the first found
    // if the the character was not  found , it returns -1
    //find the word 'prof'

    int index_prof = msg.find("prof");
    cout<<"The index of prof =  "<<index_prof<<endl;


    cout<<"\n ----- Exercise  -----"<<endl;
    string word;
    // ask the user to type a word
    cout << "Type a word: ";
    cin >> word;

    // print the 2nd character
    cout << "2nd character:  " << word[1] << endl;

    // print the length of the word
    cout << "word has: " << word.length() << " characters" << endl;

    // replace 2 characters from the 3rd character
    word.replace(2, 2, "$");
    cout << "Replace word:     " << word << endl;

    // remove 3 characters from the end
    word.erase(word.length() - 3);
    cout << "Remove end characters:  " << word << endl;

    return 0;
}