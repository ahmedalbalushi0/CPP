#include <iostream>
using namespace std;

int fibonacci_N(int n){
    if(n<0){
        cout << "Math error: negative number";
        return -1;
    }if(n==0){
        return 0;
    }if(n==1){
        return 1;
    }
    return fibonacci_N(n-1)+fibonacci_N(n-2);
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << fibonacci_N(n);
    return 0;
}