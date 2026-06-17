#include <iostream>
using namespace std;
//
int main(){
    int i = 1;
    int n;
    cout << "Enter a number: \n";
    cin >> n;
    do{
        cout << i << " ";
        i++;

    }while(i<=n);


    return 0;
}