#include <iostream>
using namespace std;
//conditional statement : age,vote
int main(){

    int age;
    cout << "Enter your age: \n";
    cin >> age;

    if(age>=18){
        cout << "You can vote \n";
    }
    else{
        cout << "You cannot vote \n";
    }
    return 0;
}