// Declare Or Declaration 
// Define or Definition 
// Main
#include<iostream>
using namespace std;

// Definition
// int getSum(int a,int b){
//     int Result = a + b;
//     return Result;
// }

// Main
// int main(){
//     int a;
//     cout<<"Enter the value of a : "<<endl;
//     cin>>a;

//     int b;
//     cout<<"Enter the value of b : "<<endl;
//     cin>>b;

//     int sum = getSum(a,b);
//     cout<<"Addition Result is : "<<sum<<endl;
//     return 0;
// }

// Explain

// Declare
int getSum(int a,int b);

// Main
int main(){
    int a;
    cout<<"Enter the value of a : "<<endl;
    cin>>a;

    int b;
    cout<<"Enter the value of b : "<<endl;
    cin>>b;

    int sum = getSum(a,b);
    cout<<"Addition Result is : "<<sum<<endl;
    return 0;
}

// Define
int getSum(int a,int b){
    int Result = a + b;
    return Result;
}
