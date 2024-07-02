#include<iostream>
using namespace std;

int getOddSum(int num){
    int sum = 0;
    for(int i=1; i<=num; i+=2){
        sum+=i;
    }
    return sum;
}

int main(){
    int Number;
    cout<<"Enter the value of Number : ";
    cin>>Number;

    int ans = getOddSum(Number);
    cout<<"Odd Sum : "<<ans<<endl;
    return 0;
}
// practice makes man perfect. 