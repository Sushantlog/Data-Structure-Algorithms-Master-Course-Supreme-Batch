#include<iostream>
#include<vector>
using namespace std;

bool checkSorted(vector<int> &arr,int& n,int i){
    if(i == n-1){
        return true;
    }
    if(arr[i+1]<arr[i]){    //we use <= to check strict increasing order
        return false;
    }
    checkSorted(arr,n,i+1);  //must be increase i
}

int main(){
    vector<int>v{10,20,30,50,60};
    int n = v.size();
    int i = 0;

    bool isSorted = checkSorted(v,n,i);

    if(isSorted){
        cout<<"Array is Sorted "<<endl;
    }
    else{
        cout<<"Array is not Sorted "<<endl;
    }
}

// Array is Sorted 

// ========================================================================