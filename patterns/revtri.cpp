#include <iostream>
using namespace std;
//reverse triangle pattern
int main(){
    int n;
    cout << "Enter a number: ";
    cin >>n;
    int num;
    for(int i=0;i<n;i++){
        for(int j=i+1;j>0;j--){
            cout <<j << " ";
        }
        cout << endl;
    }
    return 0;
}