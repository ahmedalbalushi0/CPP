#include <iostream>
using namespace std;
// Binomial formula : nCr = n! /r! (n-r)!
int Factorial(int n){
    if(n<0){ // invalid input
        cout << "Error: can't find factorial for negative numbers ";
        return -1;
    }if(n==0){ // special case
        return 1;
    }
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int binom(int n, int r){
    if(n<r || n<0 || r<0){
        cout << "Math Error\n";
        return -1;
    }
    int fact_n = Factorial(n);
    int fact_r = Factorial(r);
    int fact_Nr = Factorial(n-r);
    return (fact_n/(fact_r*fact_Nr));
}
int main(){
    int n,r;
    cout << "Enter the n :";
    cin >>n;
    cout << "Enter the r :";
    cin >> r;
    int result = binom(n,r);
    if(result !=-1){
    cout << n << "C"<<r << " = "<< result;
    }
    return 0;
}