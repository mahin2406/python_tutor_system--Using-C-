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
        cout << "1: Introduction \n 2:Key Concepts \n 3: Code Templates\n 4:Troubleshooting Guide\n";
        cout << "5:Advanced Applications \n 6: Quiz \n 7: Hands-on Exercises \n 8: Resources and Links\n";
        cout << "Press 9 to exit.";
        cin >> input;
        
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