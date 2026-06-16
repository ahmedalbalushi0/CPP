#include <iostream>
using namespace std;

int main(){
    int i = 1;
    int n;
    cout << "Enter a number: \n";
    cin >> n;
    int sum;
    while(i<=n){
        if(i%2==0){
            sum = sum + i;
            cout << i << " ";
        }
        i++;
    }
    cout << endl << "sum = " << sum;
    return 0;
}