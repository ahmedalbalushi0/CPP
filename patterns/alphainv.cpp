#include <iostream>
using namespace std;
//Inverted triangle pattern 
int main(){
    int n;
    cout << "Enter a number: ";
    cin >>n;
    char ch = 'A';
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){ //spaces i times
            cout << " ";
        }
        for(int j=0;j<n-i;j++){ //characters
            cout << ch;
        }
        cout << endl;
        ch++;
    }

    return 0;
}