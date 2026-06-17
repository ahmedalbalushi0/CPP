#include <iostream>
using namespace std;
// finding prime using square root 
int main(){
    bool isPrime = true;
    int n;
    cout <<"Enter a number: \n";
    cin >> n;
    for(int i = 2; i*i<=n; i++){
        if(n%i==0){
            isPrime = false;
            break;
        }
    }if(isPrime==true){
        cout << n << " is a prime\n";
    }else{
        cout << n << " is not a prime\n";
    }

    return 0;
}