#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter first value : "<<endl;
    cin>>a;
    cout<<"Enter second value : "<<endl;
    cin>>b;

    a = a+b;
    b = a-b;
    a = a-b;

    cout<<a<<" "<<b<<" "<<endl;
    
}