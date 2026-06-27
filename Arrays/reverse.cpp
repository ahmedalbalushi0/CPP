#include <iostream>
using namespace std;

void reverse(int arr[], int size){
    for(int i=size-1;i>=0;i--){
        cout << arr[i]<<" ";
    }
    cout << endl;
}
int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout << "Enter element ["<<i<<"] = ";
        cin >> arr[i];
    }
    reverse(arr,size);
    return 0;
}