/* 
iostream is part of the C++ standard library, 
and stdio.h is part of the C standard library. 
While stdio.h will work in C++ 
it does not provide everything 
that iostream includes as iostream is specifically for C++.

therefore, iostream --> cout, stdio.h --> printf
*/


// #include <iostream> include a header file library 
// that lets us work with input and output objects, such as cout

// using namespace std; 
// means that we can use names for objects and variables from the standard library

// the 2 lines of code will always appeared in your code (almost)

// int main() is a function
// Any code inside its curly brackets {} will be executed

// cout is an object used together with the insertion operator (<<) 
// to output/print text
// endl manipulator is another way to insert a new line,(= "\n", only one can exist in your code)
// return 0 ends the main function.

// Note in c++ always ends with ;
// Note 2 don't forget the closing curly bracket } to actually end the main function

#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World" << endl;
    cout << "Hello World" << endl;
    cout << "Hello World" << endl;
    return 0; 
}


/*
You might see some C++ programs that runs without the standard namespace library. 
The using namespace std line can be omitted and replaced with the std keyword, 
followed by the :: operator for some objects:

#include <iostream>

int main() {
  std::cout << "Hello World!";
  return 0;
}
*/
