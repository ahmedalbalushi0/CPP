#include <iostream>
using namespace std;
//sum of numbers that are divisible by 3
int main(){
    int n;
    cout << "Enter a number: \n";
    cin >>n;
    int sum = 0;
    for(int i = 1; i<=n;i++){
        if(i%3==0){
            sum = sum + i;
        }
    }
    cout << "sum of numbers that divisible by 3= " << sum;
    return 0;
}