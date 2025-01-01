#include<iostream>
using namespace std;

int Max(int num1, int num2){
    if(num1>num2){
        return num1;
    }else{
        return num2;
    }
}

int main(){
    int num1;
    cin>>num1;
    int num2;
    cin>>num2;

    int maxValue = Max(num1,num2);
    cout<<"Maximum : "<<maxValue<<endl;
    return 0;
}