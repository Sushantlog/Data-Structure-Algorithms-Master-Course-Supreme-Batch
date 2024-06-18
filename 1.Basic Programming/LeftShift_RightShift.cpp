#include<iostream>
using namespace std;

// 2

// Right Shift <<   (this will basically use for shifting bit each shifted  bit will multiplication of 2)
// int main(){
//     int a=12;
//     a = a << 1;
//     cout<<(a)<<endl;
//     int b=12;
//     b = b << 2;
//     cout<<b<<endl;
//     int c=12;
//     c = c << 3;
//     cout<<c<<endl;
//     int d=12;
//     d = d << -1;        //output = 0  warnings  //showing grabage value
//     cout<<d<<endl;      //if Right shift the value then it will be Multiply by 2   
// }

// Output =
// LeftShift_RightShift.cpp: In function 'int main()':
// LeftShift_RightShift.cpp:15:15: warning: left shift count is negative [-Wshift-count-negative]
//      d = d << -1;
//                ^
// 24
// 48
// 96
// 0


// Left shift >>    (this will basically use for shifting bit each shifted  bit will division of 2)
int main(){
    int a = 12;
    a = a >> 1;
    cout<<a<<endl;
    int b = 12;
    b = a >> 2;
    cout<<b<<endl;  
    int c = 12;
    c = c >> -1;
    cout<<c<<endl;

    int aa = 8;
    aa = aa >> 1;
    cout<<aa<<endl;

    int bb = 3;
    bb = bb >> 1;
    cout<<bb<<endl;       //if left shit the value then it will be divided by 2
}

// Output =
// LeftShift_RightShift.cpp: In function 'int main()':
// LeftShift_RightShift.cpp:40:15: warning: right shift count is negative [-Wshift-count-negative]
//      c = c >> -1;
//                ^
// 6
// 1
// 0