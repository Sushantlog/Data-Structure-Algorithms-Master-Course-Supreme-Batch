#include<iostream>
using namespace std;

int PrintB(int b){
    cout<<"b : "<<b;
}

int PrintA(int a){
    int b = 3;
    cout<<"a : "<<a<<endl;
    PrintB(b);
}

int main(){
    int a = 5;
    PrintA(a);
    return 0;
}