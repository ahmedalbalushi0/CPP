#include <iostream>
using namespace std;
//conditional statement
int main(){

    int marks;
    cout << "Enter your mark: \n";
    cin >> marks;
    if(marks>=90){
        cout << "A\n";
    }
    else if(marks<90 && marks>=80){
        cout << "B\n";
    }
    else{
        cout << "C\n";
    }
    return 0;
}