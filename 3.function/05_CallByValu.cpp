#include<iostream>
using namespace std;

int PrintNum(int a){
    cout<<"function a : "<<a<<endl;
    a++;
    cout<<"a++ : "<<a<<endl;
}

int main(){
    int a = 5;
    PrintNum(a);
    cout<<"main a : "<<a<<endl;
}