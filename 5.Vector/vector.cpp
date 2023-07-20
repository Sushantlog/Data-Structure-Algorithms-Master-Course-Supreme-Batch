#include<iostream>
#include<vector>
using namespace std;

// int main(){
    // creating an vector
    // vector<int>arr;

    // initialization of vector
    // int n;
    // vector<int>arr(n);//take user input size

    // ===================================================

    // Dynamically  take create array and take input 
    // int n;
    // cout<<"Enter Size of array : ";
    // cin>>n;

    // vector<int>a(n);
    // cout<<"Enter array Element is : "<<endl;
    // for(int i=0; i<a.size(); i++){
    //     cin>>a[i];
    // }

    // cout<<"Display array element is : "<<endl;
    // for(int i=0; i<a.size(); i++){
    //     cout<<a[i]<<" ";
    // }

    // Output = 
    // Enter Size of array : 5
    // Enter array Element is : 
    // 45
    // 25
    // 45
    // 65
    // 63
    // Display array element is : 
    // 45 25 45 65 63 

    // ===================================================

    // vector<int>brr(10,1);
    // for(int i=0; i<brr.size(); i++){
    //     cout<<brr[i]<<" ";
    // }

    // ===========================================

// }

// ===================================================================

// int main(){
//     vector<int>arr;

//     cout<<arr.size()<<endl;
//     cout<<arr.capacity()<<endl;

//     int ans = (sizeof(arr)/sizeof(int));
//     cout<<ans<<endl;        //compiler dependent
// }

// Output =
// 0
// 0
// 3

// ==============================================

// int main(){
//     vector<int>arr;  

//     arr.push_back(5); //add value in vector using push_back
//     arr.push_back(6);
//     arr.push_back(10);
//     arr.push_back(100);

//     for(int i=0; i<arr.size(); i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     // Output = 5 6 10 100 

//     arr.pop_back();   //remove value using pop_back
//     for(int i=0; i<arr.size(); i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     // Output =5 6 10 

//     // Check vector empty or not 
//     cout<<arr.empty()<<endl;

//     vector<int>brr;
//     cout<<brr.empty()<<endl;

//     // Output =
//     // 0
//     // 1

//     cout<<"Size of arr array (vector) : "<<arr.size()<<endl;
//     cout<<"Capacity of arr array (vector) : "<<arr.capacity()<<endl;

//     // Output =
//     // Size of arr array (vector) : 3        
//     // Capacity of arr array (vector) : 4    

//     cout<<"===== verify vector capacity will double or not ====="<<endl;
//     arr.push_back(42);
//     arr.push_back(55);

//     for(int i=0; i<arr.size(); i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"Size of arr array (vector) : "<<arr.size()<<endl;
//     cout<<"Capacity of arr array (vector) : "<<arr.capacity()<<endl;

// } 

// Final Output =
// 5 6 10 100 
// 5 6 10 
// 0
// 1
// Size of arr array (vector) : 3        
// Capacity of arr array (vector) : 4    
// ===== verify vector capacity will double or not =====
// 5 6 10 42 55 
// Size of arr array (vector) : 5        
// Capacity of arr array (vector) : 8  

// =================================================

// different way of vector initialization
int main(){
    vector<int>arr;

    int n;
    cout<<"initializing vector size to user: "<<endl;
    cout<<"enter value : "<<endl;
    cin>>n;
    vector<int>brr(n);
    for(int i=0; i<brr.size(); i++){
        cout<<brr[i]<<" ";      //vector will create user input size
    }
    cout<<endl;

    cout<<"Print -1 in vector size 10 "<<endl;
    vector<int>crr(10,-1);
    for(int i=0; i<crr.size(); i++){
        cout<<crr[i]<<" ";
    }
    cout<<endl;

    cout<<"print 101 in vector size 10 "<<endl;
    vector<int>drr(10,101);
    for(int i=0; i<drr.size(); i++){
        cout<<drr[i]<<" ";
    }
    cout<<endl;


    cout<<"take n size print 53 "<<endl;
    int a;
    cin>>a;
    vector<int>err(a,53);
    for(int i=0; i<err.size(); i++){
        cout<<err[i]<<" ";
    }
    cout<<endl;

    cout<<"rarely used method "<<endl;
    vector<int>frr{10,20,30,40};
    for(int i=0; i<frr.size(); i++){
        cout<<frr[i]<<" ";
    }
    cout<<endl;

}

// Output =
// initializing vector size to user: 
// enter value : 
// 5
// 0 0 0 0 0 
// Print -1 in vector size 10 
// -1 -1 -1 -1 -1 -1 -1 -1 -1 -1         
// print 101 in vector size 10 
// 101 101 101 101 101 101 101 101 101 101 
// take n size print 53 
// 6
// 53 53 53 53 53 53  
// rarely used method 
// 10 20 30 40   