#include <iostream>
using namespace std;
//New Chapter: Arrays
int main(){
    int marks[5] = {99, 100, 48, 93, 67}; //declaring an array with a size of 5 blocks
    marks[0] = 89; 
    //cout << marks[0] << endl;
    //cout << marks[1] << endl;
    //cout << marks[2] << endl;
    //cout << marks[3] << endl;
    //cout << marks[4] << endl;

    // loops on Arrays
    //size of an array: 
    int size = sizeof(marks)/ sizeof(int);
    cout <<"size of array marks: " << size << endl;

    for(int i=0;i<size;i++){
        cout <<"index (" <<i << ") = "<< marks[i]<< endl;
    }

    return 0;
}