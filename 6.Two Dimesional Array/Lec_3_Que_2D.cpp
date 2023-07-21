#include<iostream>
#include<vector>
using namespace std;

// ! Row Sum 
// int main(){
//     int arr[5][4] ={
//         {1,2,3,4},
//         {2,3,4,1},
//         {5,6,1,3},
//         {2,4,6,8},
//         {1,9,9,6}
//     };
//     int row = 5;
//     int col = 4;

//     cout<<"Printing Row Wise Sum : "<<endl;
//     for(int i=0; i<row; i++){
//         int sum = 0;
//         for(int j=0; j<col; j++){
//             sum = sum + arr[i][j];
//         }
//         cout<<"Sum : "<<sum<<endl;
//     }
// }

// Output =
// Printing Row Wise Sum : 
// Sum : 10
// Sum : 10
// Sum : 15
// Sum : 20
// Sum : 25

// ================================================

// ! Column Wise Sum 
// int main(){
//     int arr[5][4] ={
//         {1,2,3,4},
//         {2,3,4,1},
//         {5,6,1,3},
//         {2,4,6,8},
//         {1,9,9,6}
//     };
//     int row = 5;
//     int col = 4;

    // vector<int>ans;
    // for(int i=0; i<row; i++){
    //     for(int j=0; j<col; j++){
    //         ans.push_back(arr[j][i]);
    //     }
    // }
    // cout<<"Printing Column wise Sum "<<endl;
    // for(int i=0; i<ans.size(); i++){
    //     int sum = 0;
    //     for(int j=0; j<ans.size(); j++){
    //         sum = sum + ans[j];
    //     }
    //     cout<<sum<<" ";
    // }
// }

// =================================================================

// Liner search in 2D Array 

// bool foundKey(int arr[][3],int row,int col,int key){
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             if(arr[i][j]==key){
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// int main(){
//     int arr[4][3] = {
//         {1,2,3},
//         {4,5,6},
//         {7,8,9},
//         {10,11,12}
//     };
//     int row=4;
//     int col=3;

//     int key = 15;
//     if(foundKey(arr,row,col,key)){
//         cout<<"Value is present "<<endl;
//     }
//     else{
//         cout<<"Value is not present "<<endl;
//     }

// }

// Output = Value is not present

// =======================================================

int foundKey(int arr[][3],int row,int col,int key,int count){
    
    for(int i=0; i<row; i++){
        int count =0;
        for(int j=0; j<col; j++){
            if(arr[i][j]==key){
                count++;
                // return true;
            }
        }
    }
    return count;
    // cout<<"Count is : "<<numcount<<endl;
    // return count;
    // return false;
}

int main(){
    int arr[4][3] = {
        {1,2,3},
        {4,8,6},
        {7,8,9},
        {10,11,12}
    };
    int row=4;
    int col=3;

    int key = 8;
    int count = 0;
    int NumCount = foundKey(arr,row,col,key,count);
    // if(){
    //     cout<<"Value is present "<<count<<endl;
    // }
    // else{
    //     cout<<"Value is not present "<<count<<endl;
    // }

    cout<<"count : "<<NumCount<<endl;

}
