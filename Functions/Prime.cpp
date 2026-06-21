#include <iostream>
using namespace std;

bool prim(int n){
    if(n<0 || n==0 || n==1){
        return 0; //false = 0 and true = 1
    }
    bool isPrime = true;
    for(int i=2;i*i<=n;i++)
        if(n%i==0){
            isPrime = false;
            cout << n << " is not prime\n";
            break;
        }
    return isPrime;
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    bool result = prim(n);
    if(result){
        cout << n << " Prime\n";
    }else{
        cout << n << " Not prime\n";
}
    return 0;
}