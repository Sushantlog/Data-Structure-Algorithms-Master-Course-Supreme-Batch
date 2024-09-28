#include<iostream>
using namespace std;
int main(){
// division  >>
    int a = 12;
    a = a >> 1;
    cout<<a<<endl;
    int b = 12; //1100 => 0011 => 3 Decimal no division
    b = b >> 2;
    cout<<b<<endl;

// multiplication <<
    int c = 12;
    c = c << 1;
    cout<<c<<endl; 

    int d = 12;
    d = d << 2;
    cout<<d<<endl;

}