#include<iostream>
using namespace std;

// n is a parameter
void printCounting(int n){
    for(int i=1; i<=n; i++){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter the value of n :";
    cin>>n;

    // n is argument
    printCounting(n);
    return 0;
}