# include <iostream>
using namespace std;
// Find chatacter lowercase or uppercase
int main(){

    char ch;
    cout << "Enter a character: \n";
    cin >> ch;
    
    if(ch>= 'a' && ch<='z'){
        cout << "lowercase \n";
    }
    else{
        cout << "uppercase \n";
    }
    return 0;
}