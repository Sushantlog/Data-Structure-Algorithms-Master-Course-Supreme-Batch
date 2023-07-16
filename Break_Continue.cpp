#include<iostream>
using namespace std;

// int main(){
//     int n = 5;
//     for(int i=0; i<n; i++){
//         cout<<"Sushant"<<endl;
//         cout<<"Pavan"<<endl;
//         cout<<"==========================="<<endl;
//     }
    // Use Brake for Terminating loop
//     cout<<"Using Break Statement"<<endl;
//     for(int i=0; i<n; i++){
//         cout<<"Sushant"<<endl;
//         break;
//         cout<<"Pavan"<<endl;
//         cout<<"============================"<<endl;
//     }
//     cout<<"Patil"<<endl;
// }

// Output =
// Sushant
// Pavan
// ===========================
// Sushant
// Pavan
// ===========================
// Sushant
// Pavan
// ===========================
// Sushant
// Pavan
// ===========================
// Sushant
// Pavan
// ===========================
// Using Break Statement
// Sushant
// Patil

// ======================================================================

// Continue Statement

int main(){
    int n = 10;
    for(int i=0; i<n; i++){
        cout<<i<<endl;
    }
    cout<<"======================================="<<endl;
    // Use Continue For Skipping the Particular Iteration
    cout<<"Using Continue Statement"<<endl;
    for(int i=0; i<n; i++){
        if(i%2==0){
            continue;
        }
        cout<<i<<endl;
    }
}

// Output = 
// 0
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// =======================================
// Using Continue Statement
// 1
// 3
// 5
// 7
// 9

// ==================================================================