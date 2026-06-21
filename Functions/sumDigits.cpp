#include <iostream>
using namespace std;
int sumD(int n){
    int sumDig=0;
    while(n>0){
        int lastDigit= n%10; //extracting the last digit
        n = n / 10;//to remove the last digit
        sumDig = sumDig + lastDigit;
    }
    return sumDig;
}
int main(){
    int s;
    cout << "Enter a number: ";
    cin >> s;
    cout << sumD(s);
    return 0;
}