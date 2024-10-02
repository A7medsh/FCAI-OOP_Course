// File: A1_T1_section_20230022.cpp
// Purpose: The purpose of this program is to make the first letter a capital letter and the other letter will be small, and it handles the extra spaces by removing it and leave one space only.
// Author: Ahmed Shaaban Maghrbay Mohammed
// Section: not yet
// ID: 20230022
// TA: not yet
// Date: 2 Oct 2024
// Detailed explanation of the file and how program works :
/*
 The provided C++ program takes a line of text from the user and formats it into a nicely capitalized sentence.
 It starts by creating two strings: sentence for the input and output_sentence for the formatted version.
 After reading the user’s input using getline, the program checks if the input isn’t empty.
 If there’s text, it capitalizes the first letter using toupper and adds it to output_sentence.
 Next, it goes through the rest of the characters, turning them into lowercase with tolower and adding them to output_sentence.
 To make sure there are no extra spaces, it creates another string called final_output, which only adds a space if the last character was not a space, using a simple flag called ISspace.
 Finally, the program prints out the formatted sentence, giving a clean look with proper capitalization and spacing.
 */


#include <iostream>
using namespace std;

int main(void) {
    string sentence, output_sentence = "";
    getline(cin, sentence);

    if(!sentence.empty())
        output_sentence += toupper(sentence[0]);

    for(int i = 1 ; i < sentence.length() ; i++)
        output_sentence += tolower(sentence[i]);


    string final_output = "";
    bool ISspace = false;

    for(char ch : output_sentence){
        if(ch == ' '){
            if(!ISspace){
                final_output += " ";
                ISspace = true;
            }
        }
        else{
            final_output += ch;
            ISspace = false;
        }

    }

    cout<<final_output<<endl;

}