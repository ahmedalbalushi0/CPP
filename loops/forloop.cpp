#include <iostream>
using namespace std;
// counting from 1 to n using for loop
int main(){
    //for(initialization; condition ; update)
    int n;
    cout << "Enter a number\n";
    cin >> n;
    for(int i=1; i<=n; i++){
        cout << i <<" ";
    }

    return 0;
}