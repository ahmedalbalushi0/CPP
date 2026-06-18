#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: \n";
    cin >> n;
    int i =1;
    int sum = 0;
    while(i<=n){
        if(i%3==0){
            sum = sum + i;
        }
        i++;
    }
    cout << "sum of numbers divisible by 3 = "<< sum;
    return 0;
}