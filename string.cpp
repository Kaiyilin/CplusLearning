#include <iostream>
using namespace std;

// cout usage: cout << var1 << "Some String" << var2 << endl;

// string concatenation can be prformed using +

// you could also add a space with quotes (" " or ' ')
// or some string manipulation methods like \n, \r, \t 
// \r (Carriage Return) → moves the cursor to the beginning of the line without advancing to the next line
// \n (Line Feed) → moves the cursor down to the next line without returning to the beginning of the line

// A string in C++ is actually an object, 
// which contain functions that can perform certain operations on strings


// It is up to you whether you want to use + or append(). 
// the append() function is much faster. 
// but easier to just use +.

// To get the length of a string, use the length() or size() function
// Again, it's all up to you 

// You can access the characters in a string by referring to its index number inside square brackets []
// the index in C++ starts in 0 

// To change the value of a specific character in a string, refer to the index number, and use single quotes

int main(){
    string myName = "Kaiyi" ;
    string lastName = "Lin";
    string fullname = myName + "\r" + lastName; // return Linyi, cuz \r returns to K then input Lin
    string fullname_2 = myName + " " + lastName; // return Kaiyi Lin
    string fullname_3 = myName.append(lastName);
    std::cout << "\n" + fullname << endl ; 
    std::cout << fullname_2 << endl ;
    std::cout << fullname_3 << endl ; 
    std::cout << "The length of my name use length(): " << fullname_3.length() << endl;
    std::cout << "\nThe length of my name use size(): " << fullname_3.size()<< endl;
    std::cout << myName[0] + myName[1] << endl; // output would be 172
    std::cout << myName[0] << endl << myName[1] << endl; // K (new line) a 
    myName[0] = 'J'; // use single quotes to replace, Outputs Jaiyi instead of Kaiyi
    cout << myName;
    return 0;
}
