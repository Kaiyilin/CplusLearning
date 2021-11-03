# include <iostream>
using namespace std;

// constraint the input positive value x should be 8 >= x >= 1

int main(){
    int i, j, emp; 

    cout << "Type a number: ";
    cin >> j;
    if (50 < j or j < 0){
        return 0;
    }
    else{
        for (i=1; i <= j ; i++){
        // do something
        emp = j - i;
        cout << string(emp, ' ') ; // print spaces, 
        cout << string(i, '*') ; //print left hashes
        cout << ".." ; //print gaps
        cout << string(i, '*') << endl; // right hashes 
        }
    }

    return 0;
}