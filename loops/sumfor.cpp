#include <iostream>
using namespace std;
// sum of numbers using for loop
int main(){
    int sum = 0;
    int n;
    cout << "Enter you number \n";
    cin >> n;
    for(int i = 0; i<=n; i++){
        sum += i;
    }
    cout << sum;
    return 0;
}