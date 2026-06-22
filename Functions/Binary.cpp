#include <iostream>
using namespace std;

int decimal_Binary(int n){
    int answer=0;
    int remainder;
    int power=1;
    while(n>0){
        remainder=n%2;
        n=n/2;
        answer = answer + (remainder*power);
        power = power*10;
    }
    return answer;
}
int main(){
    int a;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Binary of "<<a << ":\n"<< decimal_Binary(a); 
    return 0;
}