#include <iostream>
using namespace std;
//prime validator using for loop
int main(){
    bool isPrime = true;
    int n;
    cout << "Enter a number: \n";
    cin >> n;
    for(int i = 2; i<=n-1;i++){ // check if n divisible by any number between i and n-1
        if(n%i==0){
            isPrime = false;
            break;
        }
    }
    if(isPrime==true){
        cout << n <<" is a prime number\n";
    }else{
        cout << n << " is not a prime number\n";
    }

    return 0;
}