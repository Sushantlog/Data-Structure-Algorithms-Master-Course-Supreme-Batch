#include<iostream>
using namespace std;
int main(){
    int Grade;
    cout<<"Enter your Marks"<<endl;
    cin>>Grade;

    if(Grade>=90){
        cout<<"A Grade"<<endl;
    }else if(Grade>=80){
        cout<<"B Grade"<<endl;
    }else if(Grade>=70){
        cout<<"C Grade"<<endl;
    }else if(Grade>=60){
        cout<<"D Grade"<<endl;
    }else{
        cout<<"E Grade"<<endl;
    }
}