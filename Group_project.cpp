/*
Topic: Create a menu-based console application that acts as a programming tutor for users.

Authors: Corey Dunn, Mahin Patel, Nicholas Sasser, Marc Compton.
Due Date: April 14, 2024.

*/
//Eight sections: Introduction, Key Concepts, Code Templates, Troubleshooting Guide,
//Advanced Applications, Quiz, Hands-on Exercises, and Resources and Links.
//Our section is Dictionaries, Advanced Python Concepts(our choice), and Libraries.
#include <iostream>
#include <fstream>

using namespace std;
void introduction_group4();
void Key_Concepts_group4();
void Code_Templates_group4();
void Troubleshooting_Guide_group4();
void Advanced_Applications_group4();
void Quiz_group4();
void Exercises_group4();
void Resources_group4();

int main(){
    int input;
    do{
        cout << "Please enter a number to access a section. \n 1: Introduction \n 2:Key Concepts \n 3: Code Templates \n 4:Troubleshooting Guide\n 5:Advanced Applications \n 6: Quiz \n 7: Hands-on Exercises \n 8: Resources and Links\n";
        cout << "Press 9 to exit.";
        cin >> input;
        switch(input){
            case 1:
                introduction_group4();
                break;
            case 2:
                Key_Concepts_group4();
                break;
            case 3:
                Code_Templates_group4();
                break;
            case 4:
                Troubleshooting_Guide_group4();
                break;
            case 5:
                Advanced_Applications_group4();
                break;
            case 6:
                Quiz_group4();
                break;
            case 7:
                Exercises_group4();
                break;
            case 8:
                Resources_group4();
                break;
            case 9:
                break;
            default:
                cout << "This is not a valid number.\n";
        }
    } while (input != 9);
    return 0;
}
void introduction_group4(){
    
}
void Key_Concepts_group4(){
    ifstream iFile;
    //Open file
    ifstream file("intoduction.txt");

    //Read File
    string line;
    string paragraph;

    while (getline(file, line)) {
        
        if (line == "") {  // Empty line indicates end of paragraph
        break;
        }
        paragraph += line + "\n";  // Append line to the paragraph
        }
    //close file 
    file.close();

    //Write the file
    cout << "Paragraph read from file:\n" << paragraph << std::endl;

}
void Code_Templates_group4(){

}
void Troubleshooting_Guide_group4(){

}
void Advanced_Applications_group4(){

}
void Quiz_group4(){

}
void Exercises_group4(){

}
void Resources_group4(){
    
}

/*
Resources and Links:
1. https://www.w3schools.com/python/numpy/numpy_getting_started.asp
*/