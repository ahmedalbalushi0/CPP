#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){ //i times (space)
            cout << " ";
        }
        for(int j=0;j<n-i;j++){ //n-i (numbers)
            cout << (i+1);
        }
        cout << endl;
    }
    return 0;
}