// While loop

/*
while (condition) {
  // code block to be executed
}
*/

/*

do {
  // code block to be executed
}
while (condition);

do/while loop is a variant of the while loop. 
This loop will execute the code block once, 
before checking if the condition is true, 
then it will repeat the loop as long as the condition is true.
*/

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    int i = 0;
    while (i<5){
        std::cout<< "Hello" << i << "times" << endl;
        i++; // remember this!
    }

    do {
        cout << "Mochi"<< endl;
        i++;
    }
    while (i < 10); // previously, the i was increment to i = 4
}
