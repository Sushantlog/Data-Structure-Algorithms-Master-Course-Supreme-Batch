#include<iostream>
#include<limits.h>
using namespace std;

// Climbing Stair

// int ClimbingStair(int n){
//     if(n == 0 || n == 1){
//         return 1;
//     }
//     int ans = ClimbingStair(n-1)+ClimbingStair(n-2);
//     return ans;
// }

// int main(){
//     int n;
//     cout<<"Enter the value of n "<<endl;
//     cin>>n;

//     int ans = ClimbingStair(n);
//     cout<<"Answer is : "<<ans<<endl;
//     return 0;
// }

// Enter the value of n 
// 5
// Answer is : 8

// Enter the value of n 
// 3
// Answer is : 3

// ====================================================================

// Printing Array element 

// int print(int arr[],int n, int i){
//     if(i>=n){
//         return 1;
//     }

//     cout<<arr[i]<<" ";

//     print(arr, n, i+1);
// }

// int main(){
//     int arr[5] = {10,20,30,40,50};
//     int n = 5;
//     int i=0;
    
//     print(arr,n,i);
//     return 0;
// }

// Output = 10 20 30 40 50 

// =======================================================

// find out maximum number in an array 

// int findMax(int arr[],int n, int i, int& maxi){  //& is important because value will pass by reference 
//     if(i>=n){
//         return 1;
//     }

//     maxi=max(maxi,arr[i]);

//     findMax(arr,n,i+1,maxi);
// }

// int main(){
//     int n;
//     cout<<"Enter array size : ";
//     cin>>n;

//     int arr[100];
//     for(int i = 0; i<n ;i++){
//         cin>>arr[i];
//     }
//     int i = 0;
//     int maxi = INT_MIN;
//     findMax(arr,n,i,maxi);

//     cout<<"Maximum Value is : "<<maxi<<endl;
//     return 0;
// }

// Enter array size : 5
// 14
// 25
// 45
// 65
// 52
// Maximum Value is : 65

// Enter array size : 3
// 10
// 53
// 40
// Maximum Value is : 53

// ========================================================

// Find minimum number in an array

// int findMin(int arr[],int n,int i,int& mini){
//     if(i>=n){
//         return 1;
//     }

//     mini = min(mini,arr[i]);

//     findMin(arr,n,i+1,mini);
// }

// int main(){
//     int n;
//     cout<<"Enter the size of array : ";
//     cin>>n;

//     int arr[100];
//     for(int i = 0; i<n ;i++){
//         cin>>arr[i];
//     }

//     int i = 0;
//     int mini = INT_MAX;

//     findMin(arr,n,i,mini);

//     cout<<"Minimum Value is : "<<mini<<endl;
//     return 0;
// }

// Enter the size of array : 3
// 10
// 53
// 40
// Minimum Value is : 10

// =================================================================

// String Traverse

//in sting find out char find or not 

// bool checkKey(string& str, int& n,int i,char& key){
//     if(i>=n){
//         return false;
//     }

//     if(str[i]==key){
//         return true;
//     }

//     checkKey(str,n,i+1,key);
// }

// int main(){
//     string str = "lovebabber";
//     int n = str.size();

//     char key = 'r';
//     int i =0;

//     bool ans = checkKey(str,n,i,key);
//     cout<<"Answer is : "<<ans<<endl;
//     if(ans == true){
//         cout<<"Charater is found "<<endl;
//     }
//     else{
//         cout<<"Charater is not found "<<endl;
//     }
//     return 0;
// }

// Answer is : 1
// Charater is found

// =============================================================

// find out char index in string present 

// int checkIndex(string& str, int& n,int i, char& key){
//     if(i>=n){
//         return -1;
//     }

//     if(str[i]==key){  //index will return after finding 
//         return i;
//     }

//     checkIndex(str,n,i+1,key);  //Recursive call to check outer charater this will important
// }

// int main(){
//     string str = "lovebabber";
//     int n = str.size();

//     char key = 'r';
//     int i = 0;

//     int ans = checkIndex(str,n,i,key);
//     cout<<"Charater is found at Location : "<<ans<<endl;
//     return 0;

// }

// Charater is found at Location : 9 

// =============================================================

// find total char index present in char   

int checkIndex(string& str,int& n,int i, char& ch){
    if(i>=n){
        return 0;
    }
    if(str[i]==ch){
        cout<<"Charater "<<ch<<" Found at Location : "<<i<<endl;
    }

    checkIndex(str,n,i+1,ch);
}

int main(){
    string str = "sushant";
    int n = str.size();

    char ch = 's';

    int i = 0;

    checkIndex(str,n,i,ch);
    return 0;
}

// Charater s Found at Location : 0  
// Charater s Found at Location : 2

// ============================================================