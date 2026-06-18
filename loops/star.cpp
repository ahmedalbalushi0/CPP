#include <iostream>
using namespace std;
//Nested loop
int main(){
    int n,l;
    cout << "How many stars? \n";
    cin >> n;
    cout << "How many lines? \n";
    cin >> l;
    for(int i = 1; i<=l;i++){ //outer loop -> No. of lines
        for(int m = 1; m<=n;m++){// inner loop -> No. of stars
            cout <<"*";
        }
        cout << "\n";
    }
    return 0;
}