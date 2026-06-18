#include <iostream>
using namespace std;
// Factorial of n (n!)
int main(){
    int n;
    cout << "Factorial of : \n";
    cin >> n;
    if(n==0){
        return 1;
    }else if(n<0){
        cout << "Cannot find factorial of negative numbers\n";
    }else{
    int fact = n;
    for(int i = 2; i<n;i++){
        fact = fact * i;
    }
    cout << n << "! = "<<fact;
}
    return 0;
}