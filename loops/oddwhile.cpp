#include <iostream>
using namespace std;
// sum of odd numbers using while loop
int main(){
        //using while loop
  int i=1;
  int n;
  cout << "Enter a number: \n";
  cin >> n;
  int sum;
  while(i<=n){
    if(i%2 !=0){
        sum = sum + i;
       cout << i << " ";

    }
    i++;
  }
  cout << endl << "sum = "<<sum <<endl;
    return 0;
}