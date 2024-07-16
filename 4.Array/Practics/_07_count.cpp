#include<iostream>
using namespace std;

int main(){
    int arr[] = {0,1,1,1,0,0,0,0,1,0,1,0,1,0,1};

    int ArraySize = sizeof(arr);
    cout<<"Array size is : "<<ArraySize<<endl;

    int size = 15;

    int numZero = 0;
    int numOne = 0;

    for(int i=0; i<size; i++){
        if(arr[i] == 0){
            numZero++;
        }
        if(arr[i] == 1){
            numOne++;
        }
    }
    cout<<"number of zeros "<<numZero<<endl;
    cout<<"number of ones "<<numOne<<endl;
    
}