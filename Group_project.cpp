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
struct quiz_Node{
    int data;
    quiz_Node* next;
}
void insert (int val, quiz_Node*& head){
    quiz_Node* newNode = new quiz_Node; //newNode points to the newly created Node.
    newNode->data = val; //This assigns val to the data of newNode's Node.
    newNode->next = head;

    //Update head to point at newNode
    head = newNode;
}
void randomcheck (int& r, quiz_Node* head){
    bool is_Repeat = true;
    //still need to randomize r.
    while (is_Repeat){ //repeats while is_repeat is true
        quiz_Node* temp = head;
        is_Repeat = false;
    while (temp != nullptr){ //While there is more data in the list
        if (temp->data = r){ //Sets the bool to true if r = a listed number. 
            is_Repeat =true;
        }
        temp = temp->next; //Updates temp to temp's next pointer.
    }
    }
    insert (r, head); //Once r isn't in any value, add r to the list and continue the program.
}

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

        cout << "\n \n";

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
        string line;
        while (getline(inFile, line)) {
            cout << line <<endl;
        };
        cout << "\n \n \n";

        inFile.close(); 
}
void Key_Concepts_group4(){
    ifstream inFile("key_concepts.txt");
        string line;
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        cout << "\n \n \n";

        inFile.close(); 
}
void Code_Templates_group4(){
    ifstream inFile("Code_Templates.txt");
    string line;
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        cout << "\n \n";

        inFile.close(); 
}
void Troubleshooting_Guide_group4(){
    ifstream inFile("Troubleshooting_Guide.txt");
    string line;
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        cout << "\n \n";
        inFile.close(); 
}
void Advanced_Applications_group4(){
    
    ifstream inFile("Advanced_Applications.txt");
    string line;
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        cout << "\n \n";
        
        inFile.close(); 
}
void Quiz_group4(){
    char answer;
    int correct = 0, questions;
    quiz_Node* head = nullptr;
    int r= 0; //Make this a random number, preferably one that isn't a repeat.
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
    cout << "How many questions do you want to answer?";
    cin >> questions;
    for (int i = 0; i < questions; i++){
        randomcheck (r)
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
                cout << "How can you update the value associated with a specific key in a dictionary?\n";
                cout <<"A: my_dict.update(key, new_value)   " << "B: my_dict.add(key, new_value)\n" << "C: my_dict[key] = new_value  " << "D: my_dict.modify(key, new_value)" << endl;
                cin >> answer;
                if (answer == 'c' || answer == 'C'){
                    correct +=1; 
                    cout << "That is correct!" << endl;
                }
                else{
                    cout << "The correct answer is: C" << endl;
                }
                break;
            case 7:
                //question 7
                cout << "How do you retrieve a value from a dictionary using a key?\n";
                cout <<"A: my_dict.get_value(key)   " << "B: my_dict[value]\n" << "C: my_dict.retrieve(key)  " << "D: value = my_dict[key]" << endl;
                cin >> answer;
                if (answer == 'd' || answer == 'D'){
                    correct +=1; 
                    cout << "That is correct!" << endl;
                }
                else{
                    cout << "The correct answer is: D" << endl;
                }
                break;
            case 8:
                //question 8
                cout << "How can you get a list of all the keys in a dictionary?\n";
                cout <<"A: list_of_keys = list(my_dict.keys())   " << "B: list_of_keys = my_dict.get_keys()\n" << "C: list_of_keys = my_dict.keys_list()  " << "D: list_of_keys = my_dict.all_keys()" << endl;
                cin >> answer;
                if (answer == 'a' || answer == 'A'){
                    correct +=1; 
                    cout << "That is correct!" << endl;
                }
                else{
                    cout << "The correct answer is: A" << endl;
                }
                break;
            case 9:
                //question 9
                cout << "How can you get a list of all the values in a dictionary?\n";
                cout <<"A: list_of_values = my_dict.get_values()   " << "B: list_of_values = my_dict.values_list()\n" << "C: list_of_values = list(my_dict.values())  " << "D: list_of_values = my_dict.all_values()" << endl;
                cin >> answer;
                if (answer == 'c' || answer == 'C'){
                    correct +=1; 
                    cout << "That is correct!" << endl;
                }
                else{
                    cout << "The correct answer is: C" << endl;
                }
                break;
            case 10:
                //question 10
                cout << "How do you install NumPy?\n";
                cout <<"A: #include <numpy>   " << "B: pip install numpy\n" << "C: using numpy std;  " << "D: pip import numpy" << endl;
                cin >> answer;
                if (answer == 'b' || answer == 'B'){
                    correct +=1; 
                    cout << "That is correct!" << endl;
                }
                else{
                    cout << "The correct answer is: B" << endl;
                }
                break;
            case 11
                //question 11
                cout << "How do you remove all items from a dictionary?\n";
                cout <<"A: my_dict.clear()>   " << "B: my_dict.delete_all()\n" << "C: my_dict.remove()  " << "D: clear(my_dict)" << endl;
                cin >> answer;
                if (answer == 'a' || answer == 'A'){
                    correct +=1; 
                    cout << "That is correct!" << endl;
                }
                else{
                    cout << "The correct answer is: A" << endl;
                }
                break;
            case 12:
                //question 12
                cout << "How can you create a copy of a dictionary?\n";
                cout <<"A: my_dict.copy()   " << "B: copy(my_dict)\n" << "C: my_dict.clone()  " << "D: my_dict.duplicate()" << endl;
                cin >> answer;
                if (answer == 'a' || answer == 'A'){
                    correct +=1; 
                    cout << "That is correct!" << endl;
                }
                else{
                    cout << "The correct answer is: A" << endl;
                }
                break;
            case 13:
                //question 13
                cout << "What method is used to return the value of the specified key in a dictionary?\n";
                cout <<"A: my_dict.get(key)   " << "B: my_dict.value(key)\n" << "C: my_dict[key]  " << "D: my_dict.lookup(key)" << endl;
                cin >> answer;
                if (answer == 'a' || answer == 'A'){
                    correct +=1; 
                    cout << "That is correct!" << endl;
                }
                else{
                    cout << "The correct answer is: A" << endl;
                }
                break;
            case 14:
                //question 14
                cout << "How do you add the key-value pairs from one dictionary into another?\n";
                cout <<"A: my_dict1.update(my_dict2)   " << "B: my_dict1.add(my_dict2)\n" << "C: my_dict1.concat(my_dict2)  " << "D: my_dict1.append(my_dict2)" << endl;
                cin >> answer;
                if (answer == 'a' || answer == 'A'){
                    correct +=1; 
                    cout << "That is correct!" << endl;
                }
                else{
                    cout << "The correct answer is: A" << endl;
                }
                break;
            case 15:
                //question 15
                cout << "What will be the result of accessing a non-existent key in a dictionary without using any method?\n";
                cout <<"A: Returns None   " << "B: Creates a new key\n" << "C: An empty string is returned  " << "D: A KeyError is raised" << endl;
                cin >> answer;
                if (answer == 'd' || answer == 'D'){
                    correct +=1; 
                    cout << "That is correct!" << endl;
                }
                else{
                    cout << "The correct answer is: D" << endl;
                }
                break;
            case 16:
                //question 16
                cout << "Which library in Python is used for data manipulation?\n";
                cout <<"A: Pygame   " << "B: Requests\n" << "C: Pandas  " << "D: Jinja2" << endl;
                cin >> answer;
                if (answer == 'c' || answer == 'C'){
                    correct +=1; 
                    cout << "That is correct!" << endl;
                }
                else{
                    cout << "The correct answer is: C" << endl;
                }
                break;
            case 17:
                //question 17
                cout << "What is the primary use of the NumPy library?\n";
                cout <<"A: Web development   " << "B: Game development\n" << "C: Scientific computing  " << "D: Network programming" << endl;
                cin >> answer;
                if (answer == 'c' || answer == 'C'){
                    correct +=1; 
                    cout << "That is correct!" << endl;
                }
                else{
                    cout << "The correct answer is: C" << endl;
                }
                break;
            case 18:
                //question 18
                cout << "Which function is used to create a new NumPy array?\n";
                cout <<"A: np.array()   " << "B: np.new_array()\n" << "C: np.create_array()  " << "D: np.ndarray()" << endl;
                cin >> answer;
                if (answer == 'a' || answer == 'A'){
                    correct +=1; 
                    cout << "That is correct!" << endl;
                }
                else{
                    cout << "The correct answer is: A" << endl;
                }
                break;
            case 19:
                //question 10
                cout << "Which library in Python is used for API interaction?\n";
                cout <<"A: Pygame   " << "B: Requests\n" << "C: Pandas  " << "D: Jinja2" << endl;
                cin >> answer;
                if (answer == 'b' || answer == 'B'){
                    correct +=1; 
                    cout << "That is correct!" << endl;
                }
                else{
                    cout << "The correct answer is: B" << endl;
                }
                break;
            case 20:
                //question 10
                cout << "Which library in Python is used for templating?\n";
                cout <<"A: Pygame   " << "B: Requests\n" << "C: Pandas  " << "D: Jinja2" << endl;
                cin >> answer;
                if (answer == 'd' || answer == 'D'){
                    correct +=1; 
                    cout << "That is correct!" << endl;
                }
                else{
                    cout << "The correct answer is: D" << endl;
                }
                break;
            default:
                if (questions <=20){0
                    cout << "This is not a question." << endl;
                }
                else {
                    cout << "You have run out of questions. There are only 20 questions." << endl;
                    i = quesitons;
                }
        }
        //record what 'r' is here for the randomizer
    }
    cout << "You answered " << correct << " out of 5 questions correctly." << endl;
}
void Exercises_group4(){
    ifstream inFile("Exercises_group.txt");
    string line;
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        cout << "\n \n";
        inFile.close(); 
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
