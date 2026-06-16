#include <iostream>
using namespace std;
//print numbers from 1 to n
int main(){
    int i;
    i = 1;
    int n;
    cout << "Enter a number: \n";
    cin >> n;
    while(i<=n){
        cout << i <<" ";
        i++;
    }
    return 0;
}