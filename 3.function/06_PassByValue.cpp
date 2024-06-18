#include<iostream>
using namespace std;

int print(int num){
    ++num;
    num++;
    cout<<"print num ++ : "<<num<<endl;
    --num;
    cout<<"print --num : "<<num<<endl;
    return num;
}

int main(){
    int num = 12;
    num++;
    ++num;
    cout<<print(num)<<endl;
    --num;
    cout<<"main : "<<num<<endl;
    return 0;
}