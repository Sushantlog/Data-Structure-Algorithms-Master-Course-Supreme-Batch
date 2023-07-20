#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr;  

    arr.push_back(5); //add value in vector using push_back
    arr.push_back(6);
    arr.push_back(10);
    arr.push_back(100);

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // Output = 5 6 10 100 

    arr.pop_back();   //remove value using pop_back
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // Output =5 6 10 

    // Check vector empty or not 
    cout<<arr.empty()<<endl;

    vector<int>brr;
    cout<<brr.empty()<<endl;

    // Output =
    // 0
    // 1

    cout<<"Size of arr array (vector) : "<<arr.size()<<endl;
    cout<<"Capacity of arr array (vector) : "<<arr.capacity()<<endl;

    // Output =
    // Size of arr array (vector) : 3        
    // Capacity of arr array (vector) : 4    

    cout<<"===== verify vector capacity will double or not ====="<<endl;
    arr.push_back(42);
    arr.push_back(55);

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Size of arr array (vector) : "<<arr.size()<<endl;
    cout<<"Capacity of arr array (vector) : "<<arr.capacity()<<endl;

} 

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

