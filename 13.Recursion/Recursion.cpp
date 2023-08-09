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

// =======================================================

// Printing Reverse count 8 to 1

// int PrintCount(int n){
//     if(n == 0){
//         return 0;
//     }

//     cout<<n<<" ";
//     PrintCount(n-1);
// }

// int main(){
//     int n;
//     cout<<"Enter the number of : "<<endl;
//     cin>>n;

//     PrintCount(n);
// }
// // Enter the number of : 
// 5
// 5 4 3 2 1 

// ==========================================================

// Print counting from 1 to n

// int PrintCout(int n){
//     if(n == 0){
//         return 0;
//     }

//     PrintCout(n-1);
//     cout<<n<<" ";
// }

// int main(){
//     int n;
//     cout<<"Enter Value : "<<endl;
//     cin>>n;

//     PrintCout(n);
// }

// Enter Value : 
// 5
// 1 2 3 4 5

// =====================================================

// Exponential function

// int Exp(int n){
//     if( n == 0){
//         return 1;
//     }
//     // int e = Exp(n-1);
//     // int ans = 2 * e;
//     int ans = 2 * Exp(n-1);
//     return ans;

// }

// int main(){
//     int n;
//     cin>>n;

//     int ans = Exp(n);
//     cout<<"Answer "<<ans<<" ";
// }
// 5
// Answer 32 

// 3
// Answer 8
// ==================================================================

int Multi(int n){
    if(n == 0){
        return 2;
    }
    int ans = 1 * n;
    ans = ans * Multi(n-1);
    return ans;
    
}

int main(){
    int n;
    cin>>n;

    int Multiplication = Multi(n);
    cout<<"Answer "<<Multiplication<<endl;
}

// 5
// Answer 240