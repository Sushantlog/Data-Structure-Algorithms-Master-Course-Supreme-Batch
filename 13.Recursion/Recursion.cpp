#include<iostream>
using namespace std;

int printCount(int n){
    if(n == 1){
        return 0;
    }
    if(n == 2){
        return 1;
    }
    int ans = printCount(n-1)+printCount(n-2);
    return ans;

}

int main(){
    int n;
    cin>>n;

    int fib = printCount(n);
    cout<<"fib value is :"<<fib<<" "<<n<<endl;
}