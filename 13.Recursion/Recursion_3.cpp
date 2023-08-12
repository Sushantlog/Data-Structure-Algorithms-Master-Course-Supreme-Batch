#include<iostream>
#include<vector>
using namespace std;

// bool checkSorted(vector<int> &arr,int& n,int i){
//     if(i == n-1){
//         return true;
//     }
//     if(arr[i+1]<arr[i]){    //we use <= to check strict increasing order
//         return false;
//     }
//     checkSorted(arr,n,i+1);  //must be increase i
// }

// int main(){
//     vector<int>v{10,20,30,50,60};
//     int n = v.size();
//     int i = 0;

//     bool isSorted = checkSorted(v,n,i);

//     if(isSorted){
//         cout<<"Array is Sorted "<<endl;
//     }
//     else{
//         cout<<"Array is not Sorted "<<endl;
//     }
// }

// Array is Sorted 

// ======================================================================

// ! Binary search using Recursion 

// int BinarySearch(vector<int>&arr,int& n,int i,int start,int end,int& Target ){
//     if(start > end){
//         return -1;
//     }

//     int mid = (start+(end-start)/2);

//     if(arr[mid]==Target){
//         return mid;
//     }

//     if(arr[mid]<Target){   //right side will search using start=> mid+1 
//         return BinarySearch(arr,n,i,mid+1,end,Target);
//     }
//     else if(arr[mid]>Target){  //left side will search using end => mid-1
//         return BinarySearch(arr,n,i,start,mid-1,Target);
//     }

// }

// int main(){
//     vector<int> v{15,25,35,45,65,95};

//     int n = v.size();
//     int start = 0;
//     int end = n-1;
//     int i = 0;
//     int Target = 95;

//     int Value = BinarySearch(v,n,i,start,end,Target);
//     cout<<"Binary Search Value is : "<<Value<<endl;

// }

// Binary Search Value is : 5 

// =============================================================

// difference between size and length       //!

// int main(){
//     vector<int> arr(10);

//     // {45,50,65,68,48,50};
//     cout<<arr.size()<<endl;
//     cout<<arr.length()<<endl;
// }

// ==============================================================