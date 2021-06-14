// UserInput

/*
cout is used for output, and uses the insertion operator (<<)

cin is used for input, and uses the extraction operator (>>)

*/

#include <iostream>
using namespace std;

int main(){
    int x; 
    cout << "Type a number: "; // Type a number and press enter
    cin >> x; // Get user input from the keyboard
    cout << "Your number is: " << x << endl; // Display the input value
    return 0 ;
}