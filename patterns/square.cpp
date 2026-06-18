#include <iostream>
using namespace std;
int main(){//square pattern ex: 1234 four times
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for(int i=1;i<=n;i++){
        cout <<endl;
        for(int j=1;j<=n;j++){
            cout << j;
        }
    }
    return 0;
}