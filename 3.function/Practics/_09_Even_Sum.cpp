#include<iostream>
using namespace std;

int getEvenSum(int num){
    int sum = 0;
    for(int i=2; i<=num; i+=2){
        sum+=i;
    }
    return sum;
}

int main(){
    int Number;
    cout<<"Enter the value of Number : ";
    cin>>Number;

    int ans = getEvenSum(Number);
    cout<<"Even Sum : "<<ans<<endl;
    return 0;
}