#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b = a++;
    cout << "a = " << a << endl;
    cout << "b = "<< b << endl;

    int d = 20;
    int e = ++d;
    cout << "e = " << endl;

    return 0;
}