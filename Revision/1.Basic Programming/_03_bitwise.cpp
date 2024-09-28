#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int y = 3;

    int result1 = x&y;
    cout<<result1<<endl;

    int result2 = x|y;
    cout<<result2<<endl;

    int result3 = x^y;
    cout<<result3<<endl;

    int result4 = ~x;
    cout<<result4<<endl;

    int result5 = x<<1;
    cout<<result5<<endl;

    int result6 = x>>1;
    cout<<result6<<endl;
}