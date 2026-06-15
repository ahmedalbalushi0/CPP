#include <iostream>
using namespace std;

int main(){

    int a =16, b = 5;
    //int sum = a + b;
    cout <<"sum = " << (a+b) << '\n';
    cout << "Differences = "<< (a-b)<< '\n';
    cout << "Division = "<< (a/b)<< '\n';
    cout << "product = " << (a*b)<<'\n';
    cout << "Modulo = "<< (a%b) << '\n';

    double c = 5;
    int d = 2;
    cout << (c/d) << '\n';

    int ans = (5 /(double)2);
    cout << ans << '\n';

    cout <<"----Relational Operators----"<<'\n';
    cout << (3<5) <<'\n'; //true -> 1
    cout << (3>5) <<'\n'; //false -> 0
    cout << (3<=3) <<'\n';
    cout << (3==3) <<'\n';
    cout << (3!=5) <<'\n';
    cout << (3!=3) << '\n';
    
    cout << "----Logical operators----" << '\n';// OR || AND && NOT !
    cout << !(3>2) << '\n';
    cout << ((3<1) || (0<0)) << '\n';
    cout << ((2==2) || (100<99)) << '\n';
    cout << ((3>1) && (0!=0)) << '\n';

    cout <<"sum of 2 numbers"<<'\n';
    cout << "Enter number 1: "<< '\n';
    int x;
    cin >> x;
    cout << "Enter numer 2: "<<'\n';
    int y;
    cin >> y;
    cout <<"sum = "<< x+y << '\n';
    return 0;
}
