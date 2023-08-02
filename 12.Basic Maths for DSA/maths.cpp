#include<iostream>
using namespace std;

// Prime number

bool IsPrime(int n){
    if(n<=1){
        return false;
    }
    for(int i =2; i<n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;

    int count = 0;
    for(int i = 0 ; i < n ; i++){
        if(IsPrime(i)){
            cout<<i<<endl;      //display the number first output is without this line
            count++;
        }
    }
    cout<<"Total Count is : "<<count<<endl;
}

// Output = 
// 10
// Total Count is : 4

// 10
// 2
// 3
// 5
// 7
// Total Count is : 4

// ============================================

