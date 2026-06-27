#include <iostream>
using namespace std;
//Linear Search Algorithm
int linearSearch(int arr[], int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout << "Enter element["<<i<<"] = ";
        cin >> arr[i];
    }
    int target;
    cout << "What is your targeted value? "<<endl;
    cin >>target;
    cout << linearSearch(arr, size, target)<<endl;
    return 0;
}