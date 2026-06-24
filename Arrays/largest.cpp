#include <iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter size of the array: ";
    cin >> size;
    int num[size];
    int large= INT_MIN;
    for(int i=0;i<size;i++){
        cout << "Enter number ["<<i+1<<"] = ";
        cin >> num[i];
        if(large<num[i]){
            large = num[i];
        }
    }
    cout << "largest = "<< large<< endl;
    return 0;
}