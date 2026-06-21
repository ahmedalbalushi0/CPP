#include <iostream>
using namespace std;
factorN(int n){
    int fact=1; 
    for(int i=2;i<=n;i++){
        fact = fact * i;
    }
    return fact;
}
int main(){
    int n; // pass by value
    cout << "Enter a number: ";
    cin >>n;
    cout <<n<<"! = " <<factorN(n);
    return 0;
}