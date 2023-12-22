#include<iostream>
using namespace std;

// int printCount(int n){
//     if(n == 1){
//         return 0;
//     }
//     if(n == 2){
//         return 1;
//     }
//     int ans = printCount(n-1)+printCount(n-2);
//     return ans;

// }

// int main(){
//     int n;
//     cin>>n;

//     int fib = printCount(n);
//     cout<<"fib value is :"<<fib<<" "<<n<<endl;
// }

// 6
// fib value is :5 6

// ================================================================

// Reverse printing

// void printReverse(int n){
//     if(n==0){
//         return;
//     }

//     cout<<n<<" ";

//     printReverse(n-1);
// }

// int main(){
//     int n;
//     cin>>n;

//     printReverse(n);
// }

// Output :5
// 5 4 3 2 1

// =============================================================================

// counting print 

// void PrintCounting(int n){
//     if(n==0){
//         return;
//     }

//     PrintCounting(n-1);
//     cout<<n<<" ";
// }

// int main(){
//     int n;
//     cin>>n;

//     PrintCounting(n);
// }

// 5
// 1 2 3 4 5 

// ======================================================
// Exponential function

// int Exponential(int n){
//     if(n==0){
//         return 1;
//     }

//     int ans = 2 * Exponential(n-1);
//     return ans;
// }

// int main(){
//     int n;
//     cin>>n;

//     int ans = Exponential(n);
//     cout<<"Exponential of "<<n<<" is : "<<ans<<endl;
// }

// 4
// Exponential of 4 is : 16

// ====================================================


