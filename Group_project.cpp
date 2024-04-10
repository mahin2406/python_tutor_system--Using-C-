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
        cout << "Please enter a number to access a section.\n"
             << "1: Introduction\n"
             << "2: Key Concepts\n"
             << "3: Code Templates\n"
             << "4: Troubleshooting Guide\n"
             << "5: Advanced Applications\n"
             << "6: Quiz\n"
             << "7: Hands-on Exercises\n"
             << "8: Resources and Links\n"
             << "Press 9 to exit.\n";     

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
    ifstream inFile("introduction.txt");
    if (inFile) {
        string line;
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Unable to open introduction file.\n";
    }
}
void Key_Concepts_group4(){
    ifstream inFile("key_concepts.txt");
    if (inFile) {
        string line;
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Unable to open key concepts file.\n";
    } 
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
    int correct = 0;
    /*bool correct;
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
    */
    for (int i = 0; i < 5; i++){
        int r= 0; //Make this a random number, preferably one that isn't a repeat.
        switch (r) {
            case 1:
                //question 1
                cout << "What is a Dictionary in Python?\n";
                cout <<"A: A list of values indexed by numbers  " << "B: A mutable sequence type\n" << "C: A data type that stores data as a single value  " << "D: A collection of key-value pairs where each key is linked to a specific value" << endl;
                cin >> answer;
                if (answer == 'd' || answer == 'D'){
                    correct +=1; 
                    cout << "That is correct!" << endl;
                }
                else{
                    cout << "The correct answer is: D" << endl;
                }
                break;
            case 2:
                //question 2
                cout << "What is NumPy in Python?\n";
                cout <<"A: A web development framework  " << "B: A fundamental package for scientific computing in Python\n" << "C: A text processing library  " << "D: A database management tool" << endl;
                cin >> answer;
                if (answer == 'b' || answer == 'B'){
                    correct +=1; 
                    cout << "That is correct!" << endl;
                }
                else{
                    cout << "The correct answer is: B" << endl;
                }
                break;
            case 3: 
                //question 3
                cout << "What is a Library in Python?\n";
                cout <<"A: A collection of codes that can be used for specific operations   " << "B: A programming language\n" << "C: A collection of Python scripts  " << "D: A standalone executable program" << endl;
                cin >> answer;
                if (answer == 'a' || answer == 'A'){
                    correct +=1; 
                    cout << "That is correct!" << endl;
                }
                else{
                    cout << "The correct answer is: A" << endl;
                }
                break;
            case 4:
                //question 4
                cout << "How do you verify that the key you are trying to access in a dictionary actually exists?\n";
                cout <<"A: By using the len() function   " << "B: Using the in keyword\n" << "C: Using the .get() method  " << "D: By accessing the key directly and catching exceptions" << endl;
                cin >> answer;
                if (answer == 'b' || answer == 'B' || answer == 'c' || answer == 'C'){
                    correct +=1; 
                    cout << "That is correct!" << endl;
                    cout << "Both B and C are correct answers to this question.\n";
                }
                else{
                    cout << "The correct answer is: B or C" << endl;
                }
                break;
            case 5:
                //question 5
                cout << "How do you add a key-value pair to a dictionary?\n";
                cout <<"A: my_dict.append(key: value)   " << "B: my_dict[key] = value\n" << "C: my_dict.add(key, value)  " << "D: my_dict.insert(key, value)" << endl;
                cin >> answer;
                if (answer == 'b' || answer == 'B'){
                    correct +=1; 
                    cout << "That is correct!" << endl;
                }
                else{
                    cout << "The correct answer is: B" << endl;
                }
                break;
            case 6:
                //question 6
                break;
            case 7:
                //question 7
                break;
            case 8:
                //question 8
                break;
            case 9:
                //question 9
                break;
            case 10:
                //question 10
                break;
            default:
                cout << "This is not a question." << endl;
        }
    }
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