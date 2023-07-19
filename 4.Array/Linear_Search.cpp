// #include<iostream>
// using namespace std;

// bool find(int arr[],int size,int key){
//     for(int i=0; i<size; i++){
//         if(arr[i]==key){
//             return true;
//         }
//     }
//     return false;
// }

// int main(){
//     int arr[100];
//     int n;
//     cout<<"Enter array size : ";
//     cin>>n;

//     cout<<"enter array element : "<<endl;
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     cout<<"display array : "<<endl;
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<endl;
//     }

//     cout<<"enter key value to find : "<<endl;
//     int key;
//     cin>>key;

//     bool KeyFind = find(arr,n,key);
//     if(KeyFind){
//         cout<<"Key Found !"<<endl; 
//     }
//     else{
//         cout<<"Key Not Found !"<<endl;
//     }
//     return 0;
// }

// Output =
// Enter array size : 5
// enter array element : 
// 2
// 6
// 417
// 45
// 10
// display array : 2
// 6
// 417
// 45
// 10
// enter key value to find : 
// 20
// Key Not Found !


// Enter array size : 5
// enter array element : 
// 1
// 3
// 5
// 7
// 8
// display array : 
// 1
// 3
// 5
// 7
// 8
// enter key value to find : 
// 5
// Key Found !