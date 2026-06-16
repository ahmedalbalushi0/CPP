#include <iostream>
using namespace std;

int main(){
    //sum of even numbers from 1 to n using for loop
    int n;
    cout << "Enter your number: \n";
    cin >> n;
    int sum = 0;
    for(int i = 1; i<=n; i++){
        if(i%2==0){
            sum = sum + i;
            cout << i << " ";
        }
        
    }
    cout <<endl<< "sum = " << sum;

    return 0;
}