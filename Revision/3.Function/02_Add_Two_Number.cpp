#include<iostream>
using namespace std;

int sum(int num1, int num2){
    return num1+num2;
}

int main(){
    int a,b;
    cout<<"Enter the First Number : "<<endl;
    cin>>a;
    cout<<"Enter the Second Number : "<<endl;
    cin>>b;

    int Addition = sum(a,b);
    cout<<"Two Number Of Addition is : "<<Addition<<endl;
}