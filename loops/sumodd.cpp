#include <iostream>
using namespace std;
// count sum of all odd numbers from 1 to n
int main(){
    int n;
    cout << "Enter a number: \n";
    cin >> n;
    int oddsum = 0;
    for(int i = 1; i<=n;i++){
       if(i%2 !=0){
            oddsum = oddsum + i;
        cout << i<< " ";
        }
    }
cout<< endl << "odd sum = "<<oddsum;
    return 0;
}