#include<iostream>
using namespace std;

int findMax(int num1,int num2,int num3){
    if(num1>num2 && num1>num3){
        return num1;
    }else if(num2>num1 && num2>num3){
        return num2;
    }else{
        return num3;
    }
}

int main(){
    int n1,n2,n3;
    cout<<"Enter three number to finding max : "<<endl;
    cin>>n1>>n2>>n3;

    int MaximumNumber = findMax(n1,n2,n3);
    cout<<"The Maximum Number is : "<<MaximumNumber<<endl;
    return 0;
}