#include <iostream>
using namespace std;
// sum of numbers from 1 to N
int sum(int n){
    int s=0;
    for(int i=1;i<=n;i++){
        s += i;
    }
    return s;
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "sum = "<<sum(n);
    return 0;
}