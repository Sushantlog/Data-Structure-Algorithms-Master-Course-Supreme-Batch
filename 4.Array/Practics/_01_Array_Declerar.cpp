#include<iostream>
using namespace std;

int main(){
    int arr[7];
    cout<<arr<<endl;
    cout<<&arr<<endl;

    cout<<"Array Created successfully"<<endl;

    // Creating array 
    int a[53];
    char ch[106];
    bool bo[23];

    // array initialise
    int frr[] = {2,3,4,5,7};
    int brr[5] = {2,4,6,8,10};
    int crr[10] = {3,5,6,3,2};

    // error
    // int drr[4] = {2,4,6,8,10};

    int nrr[5]={1,3,5,7};
    char cha[10] ={'a','b','c','d'};
    cout<<cha<<endl;
    cout<<nrr<<endl;
    cout<<&nrr[1]<<endl;
    cout<<&nrr[2]<<endl;
    cout<<&nrr[3]<<endl;
    cout<<"Address are as follow. "<<endl;
    for(int i=0; i<5; i++){
        cout<<&nrr[i]<<endl;
    }

    cout<<"Array initialised successfully"<<endl;
    return 0;


}