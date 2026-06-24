#include <iostream>
using namespace std;
// printing the index of the smallest value 
int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int num[size];
    int index;
    int small=INT_MAX;
    for(int i=0;i<size;i++){
        cout << "Enter number ["<<i<<"] = ";
        cin >> num[i];
        if(num[i]<INT_MAX){
            small = num[i];
            index = i;
        }
    }
    cout << "Smallest value = "<<small<<endl;
    cout << "Index of the value = "<<index;
    return 0;
}