/* Variables in C++
int - stores integers (whole numbers), without decimals, such as 123 or -123
double - stores floating point numbers, with decimals, such as 19.99 or -19.99
char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
string - stores text, such as "Hello World". String values are surrounded by double quotes
bool - stores values with two states: true or false

Note:

In C++, both float and double data types are used for floating-point values

the major differences between float and double is the precision
unless you have special requirements otherwise always using double

float --> 4 bytes 
double --> 8 bytes

A floating point number can also be a scientific number with an "e" to indicate the power of 10:

Syntax:
type variable = value;
*/

#include <iostream>
using namespace std;

int main() {
  const int theNum = 15; // When you do not want others (or yourself) 
                         // to override existing variable values, use the const keyword
  const float PI = 3.14; // const is unchangeable and read-only

  int myNum = 15;   // Now myNum is 15, Integer (whole number without decimals)
  double myFloatNum = 5.99;    // Floating point number (with decimals)
  float f1 = 3.5e3;
  double d1 = 12E4;

  char myLetter = 'D';         // Character, store a single character
  char myASC_1 = 65; //Alternatively, you can use ASCII values to display certain characters in here A
  string myText = "Hello";     // String (text)
  
  bool myBoolean = true;       // Boolean (true or false)
  int x = 5, y= 6, z = 7; // you can declare multiple variables in one time as well
  
  
  myNum = 10;       // Now myNum is 10,  
                    // if you assign a new value to an existing variable, 
                    // it will overwrite the previous value


  cout << myNum << endl;
  cout << myFloatNum << endl;
  cout << myLetter << endl;
  cout << myText << endl;
  cout << myBoolean << endl; // output 1, true --> 1, false --> 0
  cout << x + y + z << endl;
  cout << theNum*(x+y+z) << endl;
  std::cout << f1 <<endl;
  std::cout << d1 <<endl;
  
  return 0;
}
