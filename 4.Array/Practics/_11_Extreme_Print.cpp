#include<iostream>
using namespace std;

int main(){
    int arr[] = {10,20,30,40,50,60,70,80};
    int size = 8;

    int start = 0;
    int end = start - 1;

    while(start <= end){
        if(start == end){
            cout<<arr[start]<<" "<<endl;
        }else{
            cout<<arr[start]<<" ";
            cout<<arr[end]<<" ";
        }
        start++;
        end--;
    }
    return 0;
}