#include<iostream>
using namespace std;

int main(){
    int arr[10];
    cout<<"Enter the input values in array : "<<endl;
    // taking input in array
    for(int i=0; i<10; i++){
        cin>>arr[i];
    }

    // printing 
    cout<<"Printing the vaules in array "<<endl;
    for(int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }
}