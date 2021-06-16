/*
Break and Continue Statement

The break statement can also be used to jump out of a loop.
The continue statement breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop.
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main(){
    int i;
    /*
    for (i=0; i<20; i++){
        if (i == 15){
            break;
        }
        std::cout<< i<<endl;
    }
    */
    for (i=0; i<40; i++){
        if(i==30){
            continue;
        }
        std::cout<< i <<endl;
    }
}