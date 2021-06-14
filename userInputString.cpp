// User Input Strings

#include <iostream>
#include <string> // to use get line, you must have this 
using namespace std;

// cin considers a space (whitespace, tabs, etc) 
// as a terminating character, 
// which means that it can only display a single word (even if you type many words)

// when working with strings, 
// we often use the getline() function to read a line of text. 
// It takes cin as the first parameter, and the string variable as second

int main(){
    string firstName;
    string fullName;

    std::cout << "Type your first name: "; 
    std::cin >> firstName; // get user input from the keyboard
    std::cout << "Your name is: " << firstName <<endl;

    std::cout << "Type your full name: "; 
    cin >> fullName; // Type your full name: John Doe
    cout << "Your name is: " << fullName << endl; // Your name is: John

    cout << "Type your full name: "; 
    getline (cin, fullName); // Type your full name: John Doe
    cout << "Your name is: " << fullName;
    return 0;

}
