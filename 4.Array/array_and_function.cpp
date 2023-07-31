#include<iostream>
using namespace std;

int printArray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int inc(int brr[],int size){
    brr[0]=brr[0]+10;
    cout<<"print increments value : ";
    printArray(brr,size);
}

int main(){
    int arr[3]={10,20,23};
    int size =3;
    cout<<"print main function value : ";
    printArray(arr,size);
    inc(arr,size);
    cout<<"in main function print actual value : ";
    printArray(arr,size);
}
// print main functio

// Output = n value : 10 20 23
// print increments value : 20 20 23
// in main function print actual value : 20 20 23   

// ============================================

