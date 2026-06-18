#include <iostream>
using namespace std;
int main(){ //alphabet pattern: A B C D
    int n;
    cout << "Enter a number\n";
    cin >> n;
    for(int i=0;i<n;i++){
        char ch = 'A';
        for(int j=0;j<n;j++){
            cout << ch;
            ch = ch + 1;
        }
        cout <<endl;
    }
    return 0;
}