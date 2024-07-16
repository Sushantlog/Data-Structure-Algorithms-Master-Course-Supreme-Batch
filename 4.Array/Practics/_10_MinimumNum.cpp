#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int arr[] = {45,25,68,5,69,75};
    int size = 6;

    int mini = INT_MAX;

    for(int i=0; i<size; i++){
        if(arr[i]<mini){
            mini = arr[i];
        }
    }
    cout<<mini<<endl;
}