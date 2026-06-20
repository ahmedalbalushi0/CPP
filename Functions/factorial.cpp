#include <iostream>
using namespace std;
// Factorial
int factN(int n){
    if(n==0){
        return 1;
    }if(n<0){
        cout << "Error: can't find factorial for negative numbers ";
        return -1;
    }
    int f=n;
    for(int i=2;i<n;i++){
        f = f * i;
    }
    return f;
}
int main(){
    int a;
    cout << "Enter a number: ";
    cin >> a;
    int result = factN(a);
    if(result !=-1){
    cout << a << "! = "<< result;
    }
    return 0;
}