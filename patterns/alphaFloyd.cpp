#include <iostream>
using namespace std;
//Floyd's Triangle pattern (alphabets)
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    char ch='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout <<ch << " ";
            ch++;
        }
        cout << endl;
    }

    return 0;
}