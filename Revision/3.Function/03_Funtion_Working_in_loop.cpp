#include<iostream>
using namespace std;

void printName(){
    int n;
    cout<<"Enter The N Number : "<<endl;
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Function : "<<i<<endl;
    }
}

int main(){
    printName();
    return 0;
}