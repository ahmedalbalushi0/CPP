#include <iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter size of the array: ";
    cin >> size;
    int num[size];
    int small=INT_MAX;
    for(int i=0;i<size;i++){
        cout << "Enter number ["<<i<<"] = ";
        cin >> num[i];
        if(num[i]<small){
            small = num[i];
        }
    }
    cout <<"Smallest value = "<<small;
    return 0;
}