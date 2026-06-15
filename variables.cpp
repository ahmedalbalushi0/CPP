#include <iostream>
using namespace std;
int main(){
    int x; //declaration 
    x = 5; //assignment 
    
    cout << x << "\n";
    cout << "hello\nfrom the usual suspect\n";

    int age = 25;
    cout << age <<"\n";
    cout << "the size of int age is "<<sizeof(age) << "\n"; // size:Bytes

    float PI = 3.14f;
    cout <<"the value of Pi is "<< PI<<"\n";

    //boolean : bool
    //true -> 1 and false -> 0
    bool isSafe = true;
    cout <<isSafe <<"\n";

    double price = 99.99; //any floating value by default is double 
    cout << "total price is "<<price;
}
