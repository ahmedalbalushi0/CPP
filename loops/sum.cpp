#include <iostream>
using namespace std;
// sum of numbers from 1 to n
int main(){
    int i = 1;
    int n;
    cout << "Enter a number: \n";
    cin >> n;
    int sum = 0;
    
    while(i<=n){
        sum = sum + i;
        i++;
    }
    cout << sum;
    return 0;
}