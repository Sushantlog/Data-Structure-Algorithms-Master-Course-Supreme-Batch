#include<iostream>
#include<vector>
using namespace std;

// Binary Search in a nearly Sorted Array

// int NearlySorted(vector<int>arr,int target){
//     int start = 0; 
//     int end = arr.size()-1;
//     int mid = (start+(end-start)/2);

//     while(start<=end){
//         if(arr[mid]==target){
//             return mid;
//         }
//         else if(mid+1<=end && arr[mid+1]==target){
//             return mid+1;
//         }
//         else if(mid-1>=start && arr[mid-1]==target){   
//             return mid-1;
//         }
//         else if(/*mid>=start &&*/ arr[mid]>=target){    //not use any && operator
//             end = mid - 2;    //take 2 because mid-1 is already check
//         }
//         else if(/*mid>=end && */arr[mid]<=target){
//             start = mid + 2;
//         }
//         mid = (start+(end-start)/2);
//     }
//     return -1;
// }

// int main(){
//     vector<int>arr{10,3,40,20,50,80,70};
//     // int target =70;
//     int target =40;

//     int Index = NearlySorted(arr,target);

//     cout<<"Target is found at : "<<Index<<endl;
//     return 0;
// }

// OutPut = Target is found at : 6
// Target is found at : 2

// ======================================================

// Divide 2 numbers using binary search

// int solve(int dividend,int divisor){
//     int start = 0;
//     int end = dividend;
//     int mid = (start+(end-start)/2);
//     int ans = 0;

//     while(start<=end){
//         if(mid*divisor == dividend){
//             ans = mid;
//             break;
//         }
//         else if(mid*divisor >= dividend){
//             end = mid-1;
//         }
//         else if(mid*divisor <= dividend){
//             ans = mid;
//             start = mid +1;
//         }
//         mid = (start+(end-start)/2);
//     }
//     return ans;
// }

// int main(){
//     int dividend = 65;
//     int divisor = 4;

//     int quotient = solve(dividend,divisor);
//     cout<<"Answer is : "<<quotient<<endl;
//     return 0;
// }

// Output = Answer is : 16 

// =====================================================
// use absolute for ignore - sign  and also use precision

// int solve(int dividend,int divisor){
//     int start = 0;
//     int end = abs(dividend);  //use abs because -dividend value gives final ans is 0
//     int mid = (start+(end-start)/2);
//     int ans = 0;

//     while(start<=end){
//         if(abs(mid*divisor) == abs(dividend)){
//             ans = mid;
//             break;
//         }
//         else if(abs(mid*divisor) >= abs(dividend)){
//             end = mid-1;
//         }
//         else if(abs(mid*divisor) <= abs(dividend)){
//             ans = mid;
//             start = mid +1;
//         }
//         mid = (start+(end-start)/2);
//     }
//     if(divisor<0 && dividend<0 || divisor>0 && divisor>0){
//         return ans;
//     }
//     else{
//         return -ans;
//     }
// }

// int main(){
//     // int dividend = 65;
//     // int divisor = 4;

//     int dividend = 10;
//     int divisor = 2;

//     int quotient = solve(dividend,divisor);
//     cout<<"Answer is : "<<quotient<<endl;

//     double finalAns = quotient;
//     int precision;
//     double step = 0.1;
//     cout<<"Enter Precision You Want : ";
//     cin>>precision;

//     for(int i=0; i<precision; i++){
//         for(double j=finalAns; j*divisor<dividend; j+=step){
//             finalAns = j;
//         }
//         step = step /10;
//     }

//     cout<<"Final Answer is : "<<finalAns<<endl;
//     return 0;
// }

// Output =
// Answer is : 16
// Enter Precision You Want : 2
// Final Answer is : 16.24

// Answer is : 5
// Enter Precision You Want : 2      
// Final Answer is : 5

// =========================================================================

