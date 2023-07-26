#include<iostream>                                              //12/07/2023
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

// int main(){
//     int n;
//     cin>>n;
    
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-i; j++){
//             cout<<j+1<<" ";
//         }
//         cout<<endl;
//     }
// }

// Output
// 5
// 1 2 3 4 5 
// 1 2 3 4   
// 1 2 3     
// 1 2       
// 1  

// =========================================================

//       *                                                      //14/07/2023
//      * *
//     * * *
//    * * * *
//   * * * * *
//  * * * * * * 

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0; i<n; i++){
//         for(int space=0; space<n-i-1; space++){
//             cout<<" ";
//         }
//         for(int j=0; j<i+1; j++){
//             cout<<" *";
//         }
//         cout<<endl;
//     }
// }

// Output =
// 6
//       *     
//      * *    
//     * * *   
//    * * * *  
//   * * * * * 
//  * * * * * *

// =========================================================

//  * * * * * *
//   * * * * * 
//    * * * *  
//     * * *   
//      * *    
//       *   

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0; i<n; i++){
//         for(int space=0; space<i; space++){
//             cout<<" ";
//         }
//         for(int j=0; j<n-i; j++){
//             cout<<" *";
//         }
//         cout<<endl;
//     }
// }

// Output =
// 6
//  * * * * * *
//   * * * * * 
//    * * * *  
//     * * *   
//      * *    
//       *   

// =====================================================

//      *    
//     * *   
//    * * *  
//   * * * * 
//  * * * * *
//  * * * * *
//   * * * *
//    * * * 
//     * *  
//      * 

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0; i<n; i++){
//         for(int space=0; space<n-i-1; space++){
//             cout<<" ";
//         }
//         for(int j=0; j<i+1; j++){
//             cout<<" *";
//         }
//         cout<<endl;
//     }
//     for(int i=0; i<n; i++){
//         for(int space=0; space<i; space++){
//             cout<<" ";
//         }
//         for(int j=0; j<n-i; j++){
//             cout<<" *";
//         }
//         cout<<endl;
//     }
// }

// Output =
// 5
//      *    
//     * *   
//    * * *  
//   * * * * 
//  * * * * *
//  * * * * *
//   * * * *
//    * * * 
//     * *  
//      *   

// ============================================================

//     *
//    * *
//   *   *
//  *     *
// *       *
// *       *
//  *     * 
//   *   *  
//    * *   
//     *    

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0; i<n; i++){
//         for(int space=0; space<n-i-1; space++){
//             cout<<" ";
//         }
//         for(int j=0; j<2*i+1; j++){
//             if(j==0 || j==2*i){
//                 cout<<"*"; 
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }

//     for(int i=0; i<n; i++){
//         for(int space=0; space<i; space++){
//             cout<<" ";
//         }
//         for(int j=0; j<2*n-2*i-1; j++){
//             if(j==0 || j==2*n-2*i-2){       //important step -1-1 = -2 to find last element 
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

// Output =
// 5
//     *
//    * *
//   *   *
//  *     *
// *       *
// *       *
//  *     * 
//   *   *  
//    * *   
//     *  

// ==============================================


// * * * * * 
// *
// *
// *
// *
// * * * * * 
//         * 
//         * 
//         * 
//         * 
// * * * * * 

// int main(){
//     int n; 
//     cin>>n;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if(i==0 || j==i){
//                 cout<<"* ";
//             }
//         }
//         cout<<endl;
//     }
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if(i==0 || j==n-1){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if(i==0){
//                 cout<<"* ";
//             }
//         }
//         cout<<endl;
//     }
// }

// 5
// * * * * * 
// *
// *
// *
// *
// * * * * * 
//         * 
//         * 
//         * 
//         * 
// * * * * * 

//  ===========================================================

// *****
// **** 
// ***
// **
// *
// *
// **
// ***
// ****
// *****

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// Output =
// 5
// *****
// **** 
// ***
// **
// *
// *
// **
// ***
// ****
// *****
// ============================================================

// *****
//  ****
//   ***
//    **
//     *
//     *
//    **
//   ***
//  ****
// *****

int main(){
    int n;
    cin>>n;
    
    for(int i=0; i<n; i++){
        for(int space = 0; space<i; space++){
            cout<<" ";
        }
        for(int j = 0; j<n-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++){
        for(int space =0; space<n-i-1; space++){
            cout<<" ";
        }
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

// Output =
// 5
// *****
//  ****
//   ***
//    **
//     *
//     *
//    **
//   ***
//  ****
// *****

// ============================================================

// ***** *****
// ****   ****
// ***     ***
// **       **
// *         *
// *         *
// **       **
// ***     ***
// ****   ****
// ***** *****

// int main(){
//     int n; 
//     cin>>n; 

//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-i; j++){
//             cout<<"*";
//         }
//         for(int j=0; j<2*i+1; j++){
//             cout<<" ";
//         }
//         for(int j=0; j<n-i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout<<"*";
//         }
//         for(int j=0; j<2*n-2*i-1; j++){
//             cout<<" ";
//         }
//         for(int j=0; j<i+1; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// 5
// ***** *****
// ****   ****
// ***     ***
// **       **
// *         *
// *         *
// **       **
// ***     ***
// ****   ****
// ***** *****

// =========================================================

// 1         
// 2*2       
// 3*3*3     
// 4*4*4*4   
// 5*5*5*5*5 
// 5*5*5*5*5 
// 4*4*4*4   
// 3*3*3     
// 2*2       
// 1   

// int main(){
//     int n; 
//     cin>>n;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout<<i+1;
//             if(j!=i){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }

//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-i; j++){
//             cout<<n-i;
//             if(j!=n-i-1){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

// 5
// 1         
// 2*2       
// 3*3*3     
// 4*4*4*4   
// 5*5*5*5*5 
// 5*5*5*5*5 
// 4*4*4*4   
// 3*3*3     
// 2*2       
// 1 

// =================================================================

// 1    
// 12   
// 123  
// 1234 
// 12345

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

// Output =
// 5
// 1    
// 12   
// 123  
// 1234 
// 12345

// ===================================================

// Error

// int main(){
//     int n; 
//     cin>>n;

//     for(int i=0; i<n; i++){
//         int j;
//         for(int j=0; j<i+1; j++){
//             cout<<j+1;
//         }
//         j=j-1;    //When after the complete loop executed then the value use 
//         for(; j>=1; j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

// =====================================================================

// ! Error
// 1
// 121
// 12321
// 1234321

// int main(){
//     int n; 
//     cin>>n;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout<<i+1;
//         }
//         for(int j=i; i>=1; j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

// ================================================================

//     1    
//    232   
//   34543  
//  4567654 
// 567898765

// int main(){
//     int n;
//     cin>>n;
    
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-i-1; j++){             // Space print
//             cout<<" ";
//         }
//         for(int j=0; j<i+1; j++){                  // Number print 
//             cout<<i+j+1;
//         }
//         int count =2*i;
//         for(int j=0; j<i; j++){
//             cout<<count;
//             count--;
//         }
//         cout<<endl;
//     }
// }

// 5
//     1    
//    232   
//   34543  
//  4567654 
// 567898765

// ===========================================================

//     1    
//    1 2   
//   1   3  
//  1     4 
// 1 2 3 4 5

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0; i<n; i++){
//         for(int space=0; space<n-i-1; space++){
//             cout<<" ";
//         }
//         int start=1;
//         for(int j=0; j<2*i+1; j++){
//             if(i==0 || i==n-1){
//                 if(j%2==0){
//                     cout<<start;
//                     start++;
//                 }
//                 else{
//                     cout<<" ";
//                 }
//             }
//             else{
//                 if(j==0){
//                     cout<<1;
//                 }
//                 else if(j==2*i+1-1){
//                     cout<<i+1;
//                 }
//                 else{
//                     cout<<" ";
//                 }
//             }
//         }
//         cout<<endl;
//     }
// }

// Output =
// 5
//     1    
//    1 2   
//   1   3  
//  1     4 
// 1 2 3 4 5

// ===================================================================





