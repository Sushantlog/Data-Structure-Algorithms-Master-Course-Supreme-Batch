#include<iostream>
using namespace std;

// Count Zeros and Ones in array 

// int main(){
//     int arr[]={0,1,1,1,0,0,0,0,1,0,1,0,1,0,1};
//     int size = 15;

//     int NumZero = 0;
//     int NumOne = 0;

//     for(int i=0; i<size; i++){
//         if(arr[i]==0){
//             NumZero++;
//         }
//         if(arr[i]==1){
//             NumOne++;
//         }
//     }
//     cout<<"Total Zero is : "<<NumZero<<endl;
//     cout<<"Total One is : "<<NumOne<<endl;
//     return 0;
// }

// Output =
// Total Zero is : 8
// Total One is : 7

// int main(){
//     int arr[]={1,1,0,1,1};
//     int size = 5;

//     int NumZero = 0;
//     int NumOne = 0;

//     for(int i=0; i<size; i++){
//         if(arr[i]==0){
//             NumZero++;
//         }
//         if(arr[i]==1){
//             NumOne++;
//         }
//     }
//     cout<<"Total Zero is : "<<NumZero<<endl;
//     cout<<"Total One is : "<<NumOne<<endl;
//     return 0;
// }

// Output =
// Total Zero is : 1
// Total One is : 4 

// =========================================================
// Maximum Number array 
// #include<limits.h>

// int main(){
//     int arr[] ={2,4,6,1,3,7,9,12,56,43,21};
//     int size = 11;

//     int Maxi = INT_MIN;

//     for(int i=0; i<size; i++){
//         if(arr[i]>Maxi){
//             Maxi=arr[i];
//         }
//     }
//     cout<<"Maximum Value Present In An Array = "<<Maxi<<endl;
// }

// OutPut = Maximum Value Present In An Array = 56  

// ==================================================

// #include<limits.h>

// int main(){
//     int arr[]={45,6,485,68,65,23,53,9};
//     int size = 8;
    
//     int Mini = INT_MAX;

//     for(int i=0; i<size; i++){
//         if(arr[i]<Mini){
//             Mini=arr[i];
//         }
//     }
//     cout<<"Minimum Value Present In An Array = "<<Mini<<endl;
//     return 0;
// }

// Output = Minimum Value Present In An Array = 6

// =====================================================
// Extreme Print In Array
// int main(){
//     int arr[]={10,20,30,40,50,60,70,80};
//     int size =8;

//     int start = 0;
//     int end = size -1;
//     while (start<=end)
//     {
//         if(start==end){
//             cout<<arr[start]<<endl;
//         }
//         else{
//             cout<<arr[start]<<" ";
//             cout<<arr[end]<<" ";
//         }
//         start++;
//         end--;
//     }
//     return 0;
// }

// Output = 10 80 20 70 30 60 40 50 

// ==============================================================

// Reverse An Array
// int  main(){
//     int arr[]={10,20,30,40,50,60,70,80};
//     int size =8;

//     int start = 0;
//     int end = size -1;

//     while (start<=end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// Output = 80 70 60 50 40 30 20 10 

// Without using swap function 

// int main(){
//     int arr[]={10,20,30,40,50,60,70,80,90};
//     int size = 9;
    
//     int start = 0;
//     int end = size-1;

//     while(start<=end){
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;

//         start++;
//         end--;
//     }
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// Output = 90 80 70 60 50 40 30 20 10 

// ===========================================================
