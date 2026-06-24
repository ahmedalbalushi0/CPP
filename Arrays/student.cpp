#include <iostream>
using namespace std;
//New Chapter: Arrays
int main(){
    int mark[5] = {99, 100, 48, 93, 67}; //declaring an array with a size of 5 blocks
    mark[0] = 89; 
    cout << mark[0] << endl;
    cout << mark[1] << endl;
    cout << mark[2] << endl;
    cout << mark[3] << endl;
    cout << mark[4] << endl;

    return 0;
}