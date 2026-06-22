#include <iostream>
using namespace std;
//printing all the primes from 2 to N
bool Prime_N(int n){
    if(n<0 || n==0 || n==1){
        return 0; 
    }
    bool isPrime=true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            isPrime = false;
            break;
        }
    }
    return isPrime;
}
void Prime_A(int a){
    if(a>1){
        for(int i=2;i<=a;i++){
            if(Prime_N(i)){
                cout << i << " ";
            }
        }
    }else{
        cout << "Math Error";
    }
}
int main(){
    int a;
    cout << "Enter a number: ";
    cin >> a;
    Prime_A(a);
    return 0;
}