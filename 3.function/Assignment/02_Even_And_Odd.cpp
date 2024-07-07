#include<iostream>
using namespace std;

bool checkEven(int n){
    if(/*n%2 == 0*/ (n&1) == 0){
        return true;    //it is even no
    }else{
        return false;  //it is odd no
    }
}

int main(){
    int n;
    cin>>n;
    bool isEven = checkEven(n);

    if(isEven){
        cout<<n<<" is Even Number."<<endl;
    }else{
        cout<<n<<" is odd Number."<<endl;
    }
}