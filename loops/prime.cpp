#include <iostream>
using namespace std;
//check if a number is prime or not
int main(){
    bool isPrime = true;
    int n;
    cout << "Enter a number: \n";
    cin >> n;
    int i = 2;
    while(i<=n-1){
        if(n%i==0){
            isPrime = false;
            break;
        }else{
            i++;
        }
    
    }
    if(isPrime==true){
        cout << n << " is a prime number\n";
    }
    else{
        cout << n << " is not a prime\n";
    }
    return 0;
}