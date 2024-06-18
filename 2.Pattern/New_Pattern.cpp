#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout<<" * ";
//         }
//         cout<<endl;
//     }
// }

// ---------------------------------

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         if(i==0 || i==n-1){
//             for(int i=0; i<n; i++){
//                 cout<<" * ";
//             }
//         }else{
//             cout<<" * ";
//             for(int i=0; i<n-2; i++){
//                 cout<<"   ";
//             }
//             cout<<" * ";
//         }
//         cout<<endl;
//     }
// }

// ======================================

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout<<" * ";
//         }
//         cout<<endl;
//     }
// }

// =======================================

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-i; j++){
//             cout<<" * ";
//         }
//         cout<<endl;
//     }
// }

// ==================================

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout<<j+1;
//         }
//         cout<<endl;
//     }
// }

// =======================================

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-i; j++){
//             cout<<j+1;
//         }
//         cout<<endl;
//     }
// }

// =======================

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//             if(i==0 || i==n-1){
//                 for(int j=0; j<n-i; j++){
//                     cout<<" * ";
//                 }
//             }else{
//                 cout<<" * ";
//                 for(int j=0; j<n-i-2; j++){
//                     cout<<"   ";
//                 }
//                 cout<<" * ";
//             }
//         cout<<endl;
//     }
// }

// Output = 
//  *  *  *  *  *  *  * 
//  *              *    
//  *           *       
//  *        * 
//  *     * 
//  *  * 
//  * 

// ===============================================

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-i-1; j++){
//             cout<<" ";
//         }
//         for(int j=0; j<i+1; j++){
//             cout<<" *";
//         }
//         cout<<endl;
//     }
// }

// =======================================

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i; j++){
//             cout<<" ";
//         }
//         for(int j=0; j<n-i; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// =========================================

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-i-1; j++){
//             cout<<" ";
//         }
//         for(int j=0; j<i+1; j++){
//             cout<<" *";
//         }
//         cout<<endl;
//     }
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i; j++){
//             cout<<" ";
//         }
//         for(int j=0; j<n-i; j++){
//             cout<<" *";
//         }
//         cout<<endl;
//     }
// }

// =================================

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-i-1; j++){
//             cout<<" ";
//         }
//         for(int j=0; j<2*i+1; j++){
//             if(j==0 || j==2*i){
//                 cout<<"* ";
//             }else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i; j++){
//             cout<<" ";
//         }
//         for(int j=0; j<2*n-2*i-1; j++){
//             if(j==0 || j==2*n-2*i-2){
//                 cout<<"* ";
//             }else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

// ========================================

int main(){
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        int start = i + 1;
        for(int j=0; j<i+1; j++){
            cout<< start;
            start = i + 1;
        }
        cout<<endl;
    }
}
