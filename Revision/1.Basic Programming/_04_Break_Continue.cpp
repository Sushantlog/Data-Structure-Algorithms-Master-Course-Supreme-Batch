#include<iostream>
using namespace std;
int main(){
    int n = 10;
    for(int i=0; i<n; i++){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Using break "<<endl;
    for(int j=0; j<n; j++){
        if(j==2){
            break;
        }
        cout<<j<<" ";
    }
    cout<<endl;
    cout<<"Using Continue "<<endl;
    for(int k=0; k<n; k++){
        if(k%2==0){
            continue;
        }
        cout<<k<<" ";
    }
}