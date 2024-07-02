#include<iostream>
using namespace std;

int getSum(int num){
    int sum = 0;
    for(int i=1; i<=num; i++){
        sum = sum + i;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter the Value of N : ";
    cin>>n;

    int sum = getSum(n);

    cout<<"Sum Upto "<<n<<" is "<<sum<<endl;
    return 0;
}