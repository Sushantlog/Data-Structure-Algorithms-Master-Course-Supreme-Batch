#include<iostream>
using namespace std;

int main(){
    int arr[5];
    cout<<"Enter the five number to create the double : "<<endl;
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    for(int i=0; i<5; i++){
        cout<<arr[i]*2<<" ";
    }
}