#include<iostream>
using namespace std;

bool checkPrime(int n){
    for(int i=2;i<n;i++){
        if(n%2 == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    bool isPrime = checkPrime(n);
    if(isPrime){
        cout<<n<<" is Prime number."<<endl;
    }
    else{
        cout<<n<<" is not a prime number."<<endl;
    }
}