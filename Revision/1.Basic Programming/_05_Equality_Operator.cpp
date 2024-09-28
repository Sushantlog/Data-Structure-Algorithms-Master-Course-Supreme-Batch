#include<iostream>
using namespace std;

int main(){
    int arr[20];
    int n = 6;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"with 10 "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"without 10 "<<endl;
    for(int i=0; i<n; i++){
        if(arr[i] != 10){
            cout<<arr[i]<<" ";
        }
    }
}