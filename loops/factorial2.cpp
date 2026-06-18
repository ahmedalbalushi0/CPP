#include <iostream>
using namespace std;
// factorial using while loop
int main(){
    int n;
    cout << "Enter a number: ";
    cin >>n;
    int i = 2;
    int fact = n;
    if(n==0){
        return 1;
    }else if(n<0){
        cout << "Cannot find factorial of negative numbers\n";
    }else{
        while(i<n){
        fact = fact * i;
        i++;
    }
    cout << endl << n << "! = "<<fact;
    }
    return 0;
}