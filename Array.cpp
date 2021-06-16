/*Arrays 

Arrays are used to store multiple values in a single variable, 
instead of declaring separate variables for each value.

To declare an array, define the variable type, 
specify the name of the array followed by square brackets 
and specify the number of elements it should store:

We have now declared a variable that holds an array of four strings. 
To insert values to it, we can use an array literal - place the values 
in a comma-separated list, inside curly braces


You don't have to specify the size of the array. 
But if you don't, it will only be as big as the elements that are inserted into it

string cars[] = {"Volvo", "BMW", "Ford"}; // size of array is always 3
you can still insert the 4th elements into the array
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    string cars[5] = {"Volvo", "Benz", "Suzuki", "Honda"};
    float nyNums[] = {2,4,6,7,8,10}; // not specifying the size of array
    for (int i = 0; i<5; i++){
        cout << cars[i] << endl;
    }
    cars[4] = "Opel";
    cout << "After Insert a new item" << endl;
    for (int i = 0; i<5; i++){
        cout << cars[i] << endl;
    }
    
    cout << "The New num array" << endl;
    for (int i = 0; i<10; i++){
        cout << nyNums[i] << endl;
    }
    
    nyNums[6] = 88;
    cout << "After Insert a new item to numbr array" << endl;
    for (int i = 0; i<10; i++){
        cout << nyNums[i] << endl;
    } // still can loop to 10th obj, even you don't have one
    return 0; 
}