#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
    
    cout<<"--------------------------"<<endl;
    for(int i=0; i<n; i++){
        if(i==0 || i==n-1){
            for(int j=0; j<n; j++){
                cout<<" * ";
            }
        }
        else{
            cout<<" * ";
            for(int j=0; j<n-2; j++){
                cout<<"   ";
            }
            cout<<" * ";
        }
        cout<<endl;
    }

    cout<<"--------------------------"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<" * ";
        }
        cout<<endl;
    }

    cout<<"--------------------------"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<" * ";
        }
        cout<<endl;
    }

    cout<<"--------------------------"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<i+1;
        }
        cout<<endl;
    }

    cout<<"--------------------------"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<j+1;
        }
        cout<<endl;
    }

    cout<<"--------------------------"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<i+1;
        }
        cout<<endl;
    }

    cout<<"--------------------------"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<j+1;
        }
        cout<<endl;
    }

    cout<<"--------------------------"<<endl;
    for(int i=0; i<n; i++){
        for(int space=0; space<n-i-1; space++){
            cout<<" ";
        }
        for(int j=0; j<i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<"--------------------------"<<endl;
    for(int i=0; i<n; i++){
        for(int space=0; space<i; space++){
            cout<<" ";
        }
        for(int j=0; j<n-i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<"--------------------------"<<endl;
    for(int i=0; i<n; i++){
        for(int space=0; space<n-i-1; space++){
            cout<<" ";
        }
        for(int j=0; j<i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
        
        for(int space=0; space<i; space++){
            cout<<" ";
        }
        for(int j=0; j<n-i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }



}