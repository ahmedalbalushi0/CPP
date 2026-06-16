#include <iostream>
using namespace std;
// Another way for character classification
// a= 97, b = 96, c = 95 ... z = 71
// A = 65, B = 66, C = 67 ... Z = 90
int main(){

    char ch; 
    cout << "Enter you letter: \n";
    cin >> ch;
    if(ch>=65 && ch<=90){
        cout << "uppercase \n";
    }else{
        cout << "lowercase \n";
    }
    return 0;
}