/*
When you know exactly how many times you want to loop through a block of code, 
use the for loop instead of a while loop:

syntax:
for (statement 1; statement 2; statement 3) {
  // code block to be executed
}

Statement 1 is executed (one time) before the execution of the code block.

Statement 2 defines the condition for executing the code block.

Statement 3 is executed (every time) after the code block has been executed.

for (int i = 0; i < 5; i++) {
  cout << i << "\n";
}
*/

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    double celcius;
    double fahreheit;
    const int stepSize = 5;

    for (celcius=0; fahreheit < 500 ; celcius = celcius + stepSize){
        fahreheit = (9.0/5.0)*(celcius+32.0);
        cout << celcius << "\tcelcius equals to\t" << fahreheit << "fahreheit" << endl;

    }

}
