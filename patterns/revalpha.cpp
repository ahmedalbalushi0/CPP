#include <iostream>
using namespace std;
//Reverse alphabets triangle 
int main(){
    int n;
    cout << "Enter a number: ";
    cin >>n;
    for(int i=0;i<n;i++){
        char ch='A';
        ch = ch +i;
        for(int j=i+1;j>0;j--){
            cout << ch << " ";
            ch--;
        }
        cout <<endl;
    }
    return 0;
}