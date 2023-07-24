#include<iostream>
using namespace std;

// int main(){
//     int arr[100];
//     int n=6;
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     cout<<"with 10 : "<<endl;
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" "<<endl;;
//     }
//     cout<<"without 10 : "<<endl;
//     for(int i=0; i<n; i++){
//         if(arr[i]!=10){       //print except 10
//         cout<<arr[i]<<" "<<endl;
//         }
//     }
// }

// Output = 
// 10
// 52
// 450
// 10
// 255
// 65
// with 10 : 
// 10 
// 52 
// 450 
// 10 
// 255 
// 65 
// without 10 : 
// 52 
// 450 
// 255 
// 65 

// ================================================

int main(){
    int arr[100];
    int n=6;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"with 10 : "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" "<<endl;;
    }
    cout<<"Only with 10 Print : "<<endl;
    for(int i=0; i<n; i++){
        if(arr[i]==10){       //print except 10
        cout<<arr[i]<<" "<<endl;
        }
    }
}

// Output =
// 10
// 52
// 450
// 10
// 255
// 65
// with 10 : 
// 10 
// 52 
// 450 
// 10 
// 255 
// 65 
// Only with 10 Print : 
// 10 
// 10 