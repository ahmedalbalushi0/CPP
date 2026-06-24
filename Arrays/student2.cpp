#include <iostream>
using namespace std;

int main(){
    int size;
    cout <<"Enter the size of the array: "<<endl;
    cin >> size;
    int marks[size];
    //Array 
    for(int i=0;i<size;i++){
        cout << "Enter student ["<<i+1<<"] mark = ";
        cin >> marks[i];
    }
    return 0;
}