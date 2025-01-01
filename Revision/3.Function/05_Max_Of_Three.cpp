#include<iostream>
using namespace std;

void maxValue(int num1,int num2,int num3){
    if(num1>num2 && num1>num3){
        cout<<"First Number is Maximum.";
    }else if(num2>num1 && num2>num3){
        cout<<"Second Number is Maximum.";
    }else{
        cout<<"Third Number is Maximum.";
    }
}

int main(){
    int num1,num2,num3;
    cout<<"Enter The First Number : ";
    cin>>num1;
    cout<<endl;
    cout<<"Enter The Second Number : ";
    cin>>num2;
    cout<<endl;
    cout<<"Enter The Third Number : ";
    cin>>num3;
    cout<<endl;

    maxValue(num1,num2,num3);
    return 0;
}