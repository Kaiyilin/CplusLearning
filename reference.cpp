/* Reference 
A reference variable is a "reference" to an existing variable
and it is created with the & operator

string food = "Pizza";  // food variable
string &meal = food;    // reference to food
Now, we can use either the variable name food or the reference name meal to refer to the food variable

In the example from the previous page, 
the & operator was used to create a reference variable. 
But it can also be used to get the memory address of a variable; 
which is the location of where the variable is stored on the computer.

When a variable is created in C++, 
a memory address is assigned to the variable. 
And when we assign a value to the variable, it is stored in this memory address.

To access it, use the & operator, and the result will represent where the variable is stored


*/

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    string food = "Pizza";
    string &meal = food;

    cout << food << "\n";  // Outputs Pizza
    cout << meal << "\n";  // Outputs Pizza
    cout << &food << "\n"; // Output memory location of food
    cout << &meal << "\n"; // Output memory location of meal
    // since var food is the ref of var meal they will have same memory location
    return 0;
}
