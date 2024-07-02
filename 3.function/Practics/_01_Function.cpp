#include<iostream>
using namespace std;

void printName(){
    int n;
    cout<<"Enter the number you want to print : "<<endl;
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Sushant Balu Patil"<<endl;
    }
}

int main(){
    printName();
    return 0;
}