/*
Topic: Create a menu-based console application that acts as a programming tutor for users.
Authors:
Due Date:
*/
//Eight sections: Introduction, Key Concepts, Code Templates, Troubleshooting Guide,
//Advanced Applications, Quiz, Hands-on Exercises, and Resources and Links.
//Our section is Dictionaries, Advanced Python Concepts(our choice), and Libraries.
#include <iostream>
#include <fstream>

using namespace std;
void introduction();
void Key_Concepts();
void Code_Templates();
void Troubleshooting_Guide();
void Advanced_Applications();
void Quiz();
void Exercises();
void Resources();

int lib(){
    int input;
    do{
        cout << "Please enter a number to access a section." << endl;
        cout << "1: Introduction \n 2:Key Concepts \n 3: Code Templates \n 4:Troubleshooting Guide\n";
        cout << "5:Advanced Applications \n 6: Quiz \n 7: Hands-on Exercises \n 8: Resources and Links\n";
        cout << "Press 9 to exit.";
        cin >> input;
        switch(input){
            case 1:
                introduction();
                break;
            case 2:
                Key_Concepts();
                break;
            case 3:
                Code_Templates();
                break;
            case 4:
                Troubleshooting_Guide();
                break;
            case 5:
                Advanced_Applications();
                break;
            case 6:
                Quiz();
                break;
            case 7:
                Exercises();
                break;
            case 8:
                Resources();
                break;
            case 9:
                break;
            default:
                cout << "This is not a valid number.\n";
        }
    } while (input != 9);
    return 0;
}

void introduction (){
    //Introduction function
}
void Key_Concepts(){
    
}
void Code_Templates(){

}
void Troubleshooting_Guide(){

}
void Advanced_Applications(){

}
void Quiz(){

}
void Exercises(){

}
void Resources(){
    
}

/*
Resources and Links:
1. https://www.w3schools.com/python/numpy/numpy_getting_started.asp
*/