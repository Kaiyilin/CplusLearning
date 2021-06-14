// if else condition

/*
Less than: a < b
Less than or equal to: a <= b
Greater than: a > b
Greater than or equal to: a >= b
Equal to a == b
Not Equal to: a != b

Use if to specify a block of code to be executed, if a specified condition is true
Use else to specify a block of code to be executed, if the same condition is false
Use else if to specify a new condition to test, if the first condition is false
Use switch to specify many alternative blocks of code to be executed

if (condition) {
  // block of code to be executed if the condition is true
}

if (condition) {
  // block of code to be executed if the condition is true
} else { 
  // block of code to be executed if the condition is false
} 

if (condition1) {
  // block of code to be executed if condition1 is true
} else if (condition2) {
  // block of code to be executed if the condition1 is false and condition2 is true
} else {
  // block of code to be executed if the condition1 is false and condition2 is false
}
*/


// if you defined sthg as int, than gets input with float, it will stop execute 
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    double x, y;
    cout << "Type a number:" << endl;
    cin >> x;
    cout << "Type a number again:" << endl;
    cin >> y;

    if (x > y){
        std::cout << x << " is greater than "<< y <<endl;
    }
    else if (x == y){
        std::cout << x << " is equals to "<< y <<endl;
    }
    else{
        std::cout << x << " is smaller than "<< y <<endl;
    }
}