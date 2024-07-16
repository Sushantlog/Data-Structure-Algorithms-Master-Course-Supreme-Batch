#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,2,4,6,2,9,9,4,1,2};

    int size = 12;

    int count = 0;
    for(int i=0; i<size; i++){
        if(arr[i] == 2){
            count ++;
        }
    }
    cout<<count<<endl;
}