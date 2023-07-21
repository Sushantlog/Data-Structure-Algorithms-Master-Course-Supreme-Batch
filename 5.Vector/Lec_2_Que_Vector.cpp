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

// ! Pair Sum

// int main(){
//     int n;
//     cout<<"Enter array size : "<<endl;
//     cin>>n;

//     vector<int>arr(n);
//     cout<<"Enter array value : "<<endl;
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     cout<<"You Enter value is : ";
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     int sum;
//     cout<<"Enter Pair sum you want : ";
//     cin>>sum;

//     bool found;
//     for(int i=0; i<arr.size(); i++){
//         int element = arr[i];
//         for(int j=i+1; j<arr.size(); j++){
//             if(element+arr[j]==sum){
//                 cout<<"Found Pair Sum Is : "<<element<<" "<<arr[j]<<endl;
//                 found = true;
//             }
//         }
//     }
//     if(found == true){
//         cout<<"Pair is found ! "<<endl;
//     }else{
//         cout<<"Not Found Pair Sum ! "<<endl;
//     }

// }

// Output : 
// Enter array size :  
// 5
// Enter array value : 
// 10
// 20
// 40
// 60
// 70
// You Enter value is : 10 20 40 60 70 
// Enter Pair sum you want : 80
// Found Pair Sum Is : 10 70
// Found Pair Sum Is : 20 60
// Pair is found ! 

// Enter array size : 
// 5
// Enter array value : 
// 45
// 54
// 62
// 85
// 45
// You Enter value is : 45 54 62 85 45 
// Enter Pair sum you want : 500
// Not Found Pair Sum !

// ==============================================================

// !Triplet Sum

// int main(){
//     vector<int>arr{10,20,30,50,60,80,70,100};
//     int sum = 140;

//     for(int i=0; i<arr.size(); i++){
//         int element = arr[i];
//         for(int j=i+1; j<arr.size(); j++){
//             int elementSec = arr[j];
//             for(int k=j+1; k<arr.size(); k++){
//                 if(element+elementSec+arr[k]==sum){
//                     cout<<"Triplet Sum Is : "<<element<<" "<<elementSec<<" "<<arr[k]<<endl;
//                 }
//             }
//         }
//     }
// }

// Output =
// Triplet Sum Is : 10 30 100
// Triplet Sum Is : 10 50 80 
// Triplet Sum Is : 10 60 70 
// Triplet Sum Is : 20 50 70 
// Triplet Sum Is : 30 50 60 

// =====================================================================

//! four sum 

// int main(){
//     vector<int>arr{40,50,60,45,80,60,75,90,70};
//     int sum = 320;

//     for(int i=0; i<arr.size(); i++){
//         int element = arr[i];
//         for(int j=0; j<arr.size(); j++){
//             int elementSec = arr[j];
//             for(int k=j+1; k<arr.size(); k++){
//                 int elementThe = arr[k];
//                 for(int l=k+1; l<arr.size(); l++){
//                     if(element+elementSec+elementThe+arr[l]==sum)
//                     cout<<"Four Sum Pair is : "<<element<<" "<<elementSec<<" "<<elementThe<<" "<<arr[l]<<endl;
//                 }
//             }
//         }
//     }
// }

// Output = 
// Four Sum Pair is : 80 80 90 70        
// Four Sum Pair is : 75 80 75 90        
// Four Sum Pair is : 90 60 80 90        
// Four Sum Pair is : 90 80 60 90 

// =====================================================================================


