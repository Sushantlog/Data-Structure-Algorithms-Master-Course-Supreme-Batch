#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int arr[] = {2,4,1,6,8,9,0};

    int size = 7;
    int maxi = INT_MIN;

    for(int i=0; i<size; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }
    cout<<"Maximum Number is : "<<maxi<<endl;
}