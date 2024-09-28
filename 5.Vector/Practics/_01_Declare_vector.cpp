#include<iostream>
#include<vector>
using namespace std;

int main(){
    // int n;
    // cin>>n;
    // vector<int> arr(n);

    vector<int> arr;

    // complier dependent 
    // int ans = (sizeof(arr)/sizeof(int));
    // cout<<ans<<endl;

    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;

    arr.push_back(5);
    arr.push_back(7);

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // cout<<"Printing the vector values : "<<arr<<endl;

    arr.pop_back();

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // user define values in vector size
    vector<int> brr(10);
    // it will take as it is 
    cout<<"Size of b "<<brr.size()<<endl;
    cout<<"Capacity of b "<<brr.capacity()<<endl;

    // check values in brr
    for(int i=0; i<brr.size(); i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl;

    // values are present is -1
    int num;
    cout<<"Enter the value of n : "<<endl;
    cin>>num;

    vector<int> crr(num,-101);
    for(int i=0; i<crr.size(); i++){
        cout<<crr[i]<<" ";
    }


}