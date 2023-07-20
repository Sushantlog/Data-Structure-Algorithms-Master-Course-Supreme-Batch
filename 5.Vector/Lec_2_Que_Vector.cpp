#include<iostream>
#include<vector>
using namespace std;

// Find Unique Element :
// int FindUnique(vector<int>arr){
//     int ans = 0;
//     for(int i=0; i<arr.size(); i++){
//         cout<<ans<<endl;
//         cout<<ans<<" ^ "<<arr[i]<<endl;
//         cout<<"============== 1 =================="<<endl;
//         ans = ans^arr[i];
//         cout<<ans<<" ^ "<<arr[i]<<endl;
//         cout<<ans<<endl;
//         cout<<"============== 2 ================= "<<endl;
//     }
//     return ans;
// }

// int main(){
//     int n;
//     cout<<"Enter array size : "<<endl;
//     cin>>n;

//     vector<int>arr(n);
//     cout<<"Enter array element "<<endl;
//     for(int i=0; i<arr.size(); i++){
//         cin>>arr[i];
//     }

//     int uniqueNum = FindUnique(arr);

//     cout<<"Unique Element is : "<<uniqueNum<<endl;

// }

// // Outut =
// Enter array size : 
// 5
// Enter array element 
// 1
// 1
// 2
// 3
// 3
// 0
// 0 ^ 1
// ============== 1 ==================
// 1 ^ 1
// 1
// ============== 2 ================= 
// 1
// 1 ^ 1
// ============== 1 ==================
// 0 ^ 1
// 0
// ============== 2 ================= 
// 0
// 0 ^ 2
// ============== 1 ==================
// 2 ^ 2
// 2
// ============== 2 ================= 
// 2
// 2 ^ 3
// ============== 1 ==================
// 1 ^ 3
// 1
// ============== 2 =================    
// 1
// 1 ^ 3
// ============== 1 ==================   
// 2 ^ 3
// 2
// ============== 2 =================    
// Unique Element is : 2

// ==============================================================

// ! Union of Two Array 

// int main(){
//     vector<int>arr{1,3,5,7,9};
//     vector<int>brr{2,4,6,8};

//     vector<int>ans;
//     for(int i=0; i<arr.size(); i++){
//         ans.push_back(arr[i]);
//     }
//     for(int i=0; i<brr.size(); i++){
//         ans.push_back(brr[i]);
//     }

//     cout<<"Printing Union Value : "<<endl;
//     for(int i=0; i<ans.size(); i++){
//         cout<<ans[i]<<" ";
//     }

// }

// Output =
// Printing Union Value : 
// 1 3 5 7 9 2 4 6 8 

// =============================================

//! Intersection of two array 

// int main(){
//     vector<int>arr{1,2,3,3,4,6,8};
//     vector<int>brr{3,3,4,10};

//     vector<int>ans;
//     for(int i=0; i<arr.size(); i++){
//         int element = arr[i];
//         for(int j=0; j<brr.size(); j++){
//             if(element == brr[j]){          //Carefully Prepare it 
//                 brr[j] = -1;        //!handling double
//                 ans.push_back(element);
//             }
//         }
//     }
//     cout<<"Print Intersection Value : ";
//     for(int i=0; i<ans.size(); i++){
//         cout<<ans[i]<<" ";
//     }

    // for(auto value:ans){
    //     cout<<value<<" ";
    // }
// }

// Output = Print Intersection Value : 3 3 4 

// ==========================================================

// Union of two array (handel duplicate value)
// #include<limits.h>
// int main(){
//     vector<int>arr{1,3,4,5,6};
//     vector<int>brr{2,4,6,8};

//     vector<int>ans;
//     for(int i=0; i<arr.size(); i++){
//         int element = arr[i];
//         for(int j=0; j<brr.size(); j++){
//             if(element == brr[j]){
//                 brr[j] = INT_MIN;
//             }
//         }
//     }
//     // Failure in solving this 
//     // for(int i=0; i<arr.size(); i++){
//     //     ans.push_back(arr[i]);
//     // }
//     // for(int i=0; i<brr.size(); i++){
//     //     ans.push_back(brr[i]);
//     // }
//     // cout<<"Printing Union : "<<endl;
//     // for(int i=0; i<ans.size(); i++){
//     //     if(ans[i] != INT_MIN){
//     //         cout<<arr[i]<<endl;
//     //     }
//     // }

//     for(int i=0; i<arr.size(); i++){
//         ans.push_back(arr[i]);
//     }
//     for(int i=0; i<brr.size(); i++){
//         if(brr[i] != INT_MIN)
//         ans.push_back(brr[i]);
//     }
    
//     cout<<"Printing Union : "<<endl;
//     for(int i=0; i<ans.size(); i++){
//         cout<<ans[i]<<" ";
//     }
    
// }

// Output = 
// Printing Union : 
// 1 3 4 5 6 2 8

// =======================================================

