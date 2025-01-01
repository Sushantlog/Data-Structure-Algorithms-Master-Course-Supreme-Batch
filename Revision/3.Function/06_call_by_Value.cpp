#include<iostream>
using namespace std;

int printNum(int a){
    cout<<"Function a : "<<a<<endl;
    a++;
    cout<<"a++ : "<<a<<endl;
    return a;
}

int main(){
    int a = 5;
    printNum(a);
    cout<<"Main a : "<<a<<endl;
    cout<<"Function return value a : "<<printNum(a)<<endl;
    cout<<"a : "<<a<<endl;
}