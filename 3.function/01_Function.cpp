#include<iostream>
using namespace std;

// Function declare
// returnType functionName()  [in this() it will take input parameter]
// void PrintName(){
//     int n;
//     cout<<"Enter the N number : "<<endl;  //function body
//     cin>>n;

//     for(int i=0; i<n; i++){
//         cout<<"Fuction : "<<i<<endl;
//     }
// }


// int main(){
//     PrintName();  //fuction call
//     return 0;
// }

// =======================================

// Function declare
// returnType functionName()  [in this() it will take input parameter]
void PrintName(){   //function definations
    int n;
    cout<<"Enter the N number : "<<endl;  //function body
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Fuction : "<<i<<endl;
    }
}


int main(){
    PrintName();  //fuction call
    return 0;
}

// int main(int 1){
//     PrintName();  //not possible
// }

// If I am written return -1 And return 1. Instead of the  
// return 0 Then the programme executes In a proper way No heroes happen 

// return 0: Indicates success or no errors.
// return 1: Indicates an error or a specific condition.
// return -1: Indicates an error or a specific failure condition, often used to denote a distinct type of error from return 1.