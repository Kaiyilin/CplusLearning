// Short Hand If Else

// the ternary operator consists of three operands.
// It can be used to replace multiple lines of code with a single line.
// It is often used to replace simple if else statements

/*
syntax:
variable = (condition) ? expressionTrue : expressionFalse;

original:

int time = 20;
if (time < 18) {
  cout << "Good day.";
} else {
  cout << "Good evening.";
}
*/

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    int time = 20 ;
    string result = (time < 18) ? "Good day." : "Good evening.";
    cout << result;
}

