#include<iostream>
using namespace std;

int merge(int* arr,int start, int end){
    int mid = start+(end-start)/2;

    // find out length of two different array 
    int len1 = mid - start +1;  //left side
    int len2 = end - mid;       //right side

    // crate array of len1 and len2
    int *left = new int[len1];
    int *right = new int[len2];

    // value will copy
    int k = start;
    for(int i = 0; i<len1; i++){
        left[i] = arr[k];
        k++;
    }

    k = mid + 1;
    for(int i = 0; i<len2; i++){
        right[i] = arr[k];
        k++;
    }

    // merge logic
    int rightIndex = 0;
    int leftIndex = 0;
    int mainIndex = start;

    while(leftIndex < len1 && rightIndex < len2){
        if(left[leftIndex] < right[rightIndex]){
            arr[mainIndex++] = left[leftIndex++];
            // or
            // mainIndex++;
            // leftIndex++;
        }
        else if(right[rightIndex] < left[leftIndex]){
            arr[mainIndex++] = right[rightIndex++];
        }
    }

    // copy remaining values exhaust right array for left array copy
    while(leftIndex < len1){
        arr[mainIndex++] = left[leftIndex++];
    }

    // copy remaining value exhaust left array for right array copy 
    while(rightIndex < len2){
        arr[mainIndex++] = right[rightIndex++];
    }

}

void mergeSort(int * arr,int start ,int end){
    if(start>=end){
        return ;
    }

    int mid = start+(end-start)/2;

    mergeSort(arr,start,mid);

    mergeSort(arr,mid+1,end);

    merge(arr,start,end);
}

int main(){
    int arr[] ={4,5,13,2,12};
    int n = 5;
    int start = 0;
    int end = n-1;
    mergeSort(arr,start,end);

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

// Output = 2 4 5 12 13 