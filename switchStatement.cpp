// Use the switch statement to select one of many code blocks to be executed.

/*
switch(expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
}

This is how it works:

The switch expression is evaluated once

The value of the expression is compared with the values of each case

If there is a match, the associated block of code is executed

When C++ reaches a break keyword, it breaks out of the switch block.

This will stop the execution of more code and case testing inside the block.

When a match is found, and the job is done, it's time for a break. There is no need for more testing.

This can save execution time
*/

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    int day;
    cout << "From 1-7 choose an integer: "<< endl;
    cin >> day;
    switch (day)
    {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        default:
            cout << "Not a day";
            break;
    }
}

