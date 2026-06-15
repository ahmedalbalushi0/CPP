#include <iostream>
using namespace std;
int main(){
    //implicit 
    //converting a string to an integer
    char grade = 'A'; //65

    int value = grade;
    cout << value << "\n";
    

    //explicit
    double price = 99.99;

    int newPrice = (int)price; // it will not round
    cout << newPrice << endl;
    
    return 0;
}