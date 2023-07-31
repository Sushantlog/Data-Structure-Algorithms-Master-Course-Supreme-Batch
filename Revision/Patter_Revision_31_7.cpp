#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int row=0; row<n; row++){
        for(int col=0; col<col-row; col++){   
            //this condition we take col-row no any print
            //this condition we take col+row unstable * print
            cout<<" * ";
        }
        cout<<endl;
    }
}