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

void group_4(){
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

int main(){
    group_4;
    return 0;
}

//Introduction through Advanced Applications can probably be implemented by outputting text from a file.
//Quiz requires matching answers to built in data, so it will be more complex.

void introduction_group4(){
    //Introduction function
    ifstream inFile;
    inFile.open("introduction.txt");
    while (getline(inFile, line)){//getline() is a function that returns a boolean based on its successful operation.
        cout << line << endl;
    }
    inFile.close();
}
void Key_Concepts_group4(){
    ifstream inFile;
    inFile.open("key_concepts.txt");
    while (getline(inFile, line)){//getline() is a function that returns a boolean based on its successful operation.
        cout << line << endl;
    }
    inFile.close();
}
void Code_Templates_group4(){
    ifstream inFile;
    inFile.open("Code_Templates.txt");
    while (getline(inFile, line)){//getline() is a function that returns a boolean based on its successful operation.
        cout << line << endl;
    }
    inFile.close();
}
void Troubleshooting_Guide_group4(){
    ifstream inFile;
    inFile.open("Troubleshooting_Guide.txt");
    while (getline(inFile, line)){//getline() is a function that returns a boolean based on its successful operation.
        cout << line << endl;
    }
    inFile.close();
}
void Advanced_Applications_group4(){
    ifstream inFile;
    inFile.open("Advanced_Applications.txt");
    while (getline(inFile, line)){//getline() is a function that returns a boolean based on its successful operation.
        cout << line << endl;
    }
    inFile.close();
}
void Quiz_group4(){
    char answer;
    bool correct;
    //Example question
    cout << "Example question\n";
    cout <<"A: Example answer  " << "B: Example Answer\n" << "C: Example Correct Answer  " << "D: Example Answer" << endl;
    cin >> answer;
    if (answer == 'c' || answer == 'C'){
        correct = true;
    }
    else{
        correct = false;
    }
    //We might not need the correct variable for the real quiz, but this shows how the questions would execute.
}
void Exercises_group4(){

}
void Resources_group4(){
    cout << "NumPy tutorial: https://www.w3schools.com/python/numpy/numpy_getting_started.asp \n";
    cout << "Python Dictionaries: https://www.w3schools.com/python/python_dictionaries.asp \n";
    cout << "Python Dictionaries: https://www.geeksforgeeks.org/python-dictionary/ \n";
    cout << "General Libraries: https://www.geeksforgeeks.org/libraries-in-python/ \n";
    cout << "Official NumPy website: https://numpy.org/ \n";
    cout << "List Comprehension: https://www.w3schools.com/python/python_lists_comprehension.asp \n";
    cout << "Generators: https://wiki.python.org/moin/Generators \n";
    cout << "Decorators: https://peps.python.org/pep-0318/ \n";
    cout << "Pandas: https://pypi.org/project/pandas/ \n";
    cout << "MatPlotLib: https://www.w3schools.com/python/matplotlib_pyplot.asp \n";
    cout << "Requests: https://pypi.org/project/requests/ \n";
    cout << "Jinja2: https://pypi.org/project/Jinja2/ \n";
}

/*
Resources and Links:
1. https://www.w3schools.com/python/numpy/numpy_getting_started.asp
2. https://www.w3schools.com/python/python_dictionaries.asp
3. https://www.geeksforgeeks.org/python-dictionary/
4. https://www.geeksforgeeks.org/libraries-in-python/
5. https://numpy.org/
6. https://www.w3schools.com/python/python_lists_comprehension.asp
7. https://wiki.python.org/moin/Generators
8. https://peps.python.org/pep-0318/
9. https://pypi.org/project/pandas/
10. https://www.w3schools.com/python/matplotlib_pyplot.asp
11. https://pypi.org/project/requests/
12. https://pypi.org/project/Jinja2/
*/