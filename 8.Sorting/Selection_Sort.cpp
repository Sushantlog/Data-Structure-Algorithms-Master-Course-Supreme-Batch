#include<iostream>
#include<vector>
using namespace std;

// Selection Sort

// int main(){
//     vector<int>arr{5,4,3,2,1};

//     int n = arr.size();

//     for(int i = 0; i<n-1; i++){
//         int minIndex = i;
//         for(int j = i+1; j<n; j++){
//             if(arr[j]<arr[minIndex]){
//                 minIndex = j;
//                 cout<<minIndex<<endl;
//             }
//         }
//         swap(arr[i],arr[minIndex]);
//     }

//     cout<<"Printing sorted array is : ";
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }

// }

// Output = Printing sorted array is : 1 2 3 4 5 

// ========================================================================

// Babble Sort

// int main(){
//     vector<int>arr{10,1,7,6,14,9};
//     int n = arr.size();

//     for(int round = 1; round<n; round++){
//         bool Swapped = false;
//         for(int j = 0; j<n-round; j++){
//             if(arr[j]>arr[j+1]){
//                 Swapped = true;
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//         if(Swapped == false ){    //no need but can be use for optimization 
//             break;
//         }
//     }

//     cout<<"Printing Babble Sorted Value : "<<endl;
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// Output = 
// Printing Babble Sorted Value :   
// 1 6 7 9 10 14 

// ===================================================================

// Insertion sort 

int main(){
    vector<int>arr{10,1,7,6,14,9};

    int n = arr.size();

    for(int round = 1; round < n; round++){ 
        int val = arr[round];                   // Fetch Value
        int j = round -1;
        for(; j>=0; j--){
            if(arr[j]>val){                     //Compare Value to current index
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=val;
    }
    cout<<"Printing Insertion Sort : "<<endl;
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

// Output =
// Printing Insertion Sort :        
// 1 6 7 9 10 14 

// =================================================================




