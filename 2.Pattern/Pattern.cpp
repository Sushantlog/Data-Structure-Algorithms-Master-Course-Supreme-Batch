#include<iostream>
using namespace std;

//  * * * * *
//  * * * * *
//  * * * * *

// int main(){
//     int RowCount;
//     int ColCount;

//     cin>>RowCount;
//     cin>>ColCount;

//     for(int row=0; row<RowCount; row++){
//         for(int col=0; col<ColCount; col++){
//             cout<<" *";
//         }
//         cout<<endl;
//     }
// }

// Output =
// 5
// 4
//  * * * *
//  * * * *
//  * * * *
//  * * * *
//  * * * *

// ===========================================================

//  * * * *
//  * * * *
//  * * * *
//  * * * *

// int main(){
//     int n;
//     cin>>n;

//     for(int row=0; row<n; row++){
//         for(int col=0; col<n; col++){
//             cout<<" *";
//         }
//         cout<<endl;
//     }
// }

// Output =
// 5
//  * * * * *
//  * * * * *
//  * * * * *
//  * * * * *
//  * * * * *

// ===========================================================

// * * * * * *
// *         *
// *         *
// * * * * * *

// int main(){
//     int RowCount;
//     int ColCount;

//     cin>>RowCount;
//     cin>>ColCount;

//     for(int row=0; row<RowCount; row++){
//         if(row==0 || row==RowCount-1){
//             for(int col=0; col<ColCount; col++){
//                 cout<<" * ";
//             }
//         }
//         else{
//             cout<<" * ";
//             for(int col=0; col<ColCount-2; col++)
//             {
//                 cout<<"   ";
//             }
//             cout<<" * ";
//         }
//         cout<<endl;
//     }
// }

// Output =
// 5
// 7
//  *  *  *  *  *  *  * 
//  *                 * 
//  *                 * 
//  *                 * 
//  *  *  *  *  *  *  * 

// =========================================================

//  * 
//  *  *       
//  *  *  *    
//  *  *  *  * 

// int main(){
//     int n;
//     cin>>n;

//     for(int row=0; row<n; row++){
//         for(int col=0; col<row+1; col++){
//             cout<<" * ";
//         }
//         cout<<endl;
//     }
// }

// Output =
// 5
//  * 
//  *  * 
//  *  *  *       
//  *  *  *  *    
//  *  *  *  *  * 

// ==================================================

//  *  *  *  *  * 
//  *  *  *  *    
//  *  *  *       
//  *  * 
//  * 

// int main(){
//     int n;
//     cin>>n;
//     for(int row=0; row<n; row++){
//         for(int col=0; col<n-row; col++){
//             cout<<" * ";
//         }
//         cout<<endl;
//     }
// }

// Output =
// 5
//  *  *  *  *  * 
//  *  *  *  *    
//  *  *  *       
//  *  * 
//  * 

// =================================================

// 1         
// 1 2       
// 1 2 3     
// 1 2 3 4   
// 1 2 3 4 5 

// int main(){
//     int n;
//     cin>>n;
//     for(int row=0; row<n; row++){
//         for(int col=0; col<row+1; col++){
//             cout<<col+1<<" ";
//         }
//         cout<<endl;
//     }
// }

// Output =
// 5
// 1         
// 1 2       
// 1 2 3     
// 1 2 3 4   
// 1 2 3 4 5 

// ================================================

// 1 2 3 4 5 
// 1 2 3 4   
// 1 2 3     
// 1 2       
// 1    

int main(){
    int n;
    cin>>n;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}

// Output
// 5
// 1 2 3 4 5 
// 1 2 3 4   
// 1 2 3     
// 1 2       
// 1  

// =========================================================
