#include<iostream>
using namespace std;

int Binary_Search(int arr[], int n, int Target_Key){
    int start = 0;
    int end = n-1;
    int mid = (start+(end-start)/2);

    while(start <= end){
        if(arr[mid]==Target_Key){
            return mid;
        }
        else if(arr[mid]>Target_Key){
            end = mid -1;
        }
        else if(arr[mid]<Target_Key){
            start = mid + 1;
        }
        mid = (start+(end-start)/2);
    }

}

// int main(){
//     int arr[10]={1,3,4,6,7,9};
//     int n = 6;

//     int Target_key = 7;
//     int location = Binary_Search(arr,n,Target_key);

//     cout<<"Target value is present at : "<<location<<" Location"<<endl;

// }

int main(){
    int arr[10]={2,6,8,9,10,12,14,16};
    int n = 8;
    int Target_Key = 8;

    int location = Binary_Search(arr,n,Target_Key);
    cout<<"Target value is present at : "<<location<<" location "<<endl;
}

// Output = Target value is present at : 4 Location
//          Target value is present at : 2 location 