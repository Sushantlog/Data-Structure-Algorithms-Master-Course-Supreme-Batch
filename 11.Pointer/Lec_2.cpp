#include<iostream>
using namespace std;

// int main(){
//     int arr[4] = {12,14,15,18};
//     cout<<arr<<endl;
//     cout<<arr[0]<<endl;
//     cout<<&arr<<endl;
//     cout<<&arr[0]<<endl;

// }

// Output = 
// 0x61ff00
// 12
// 0x61ff00
// 0x61ff00

// ==================================================ds

// int main(){
//     int arr[4] = {12,14,15,18};
//     int *ptr = arr;            //using pointer we can 
//     cout<<ptr<<endl;        //in array ptr address value is null of different 
//     cout<<&ptr<<endl;       
// }

// int main(){
//     int arr[4]= {12,44,15,18};

//     cout<<arr<<endl;
//     cout<<arr[0]<<endl;
//     cout<<*arr<<endl;
//     cout<<*arr+1<<endl;
//     cout<<*(arr)+1<<endl;
//     cout<<*(arr+1)<<endl;
//     cout<<arr[1]<<endl;
//     cout<<*(arr+2)<<endl;
//     cout<<arr[2]<<endl;
//     cout<<*(arr+3)<<endl;
//     cout<<arr[3]<<endl;

// }

// Output = 
// 0x61ff00
// 12
// 12
// 13
// 13
// 44
// 44
// 15
// 15
// 18
// 18

// ===================================================
// different type of array accessing values

// int main(){
//     int arr[4]={11,25,45,75};
//     cout<<arr[1]<<endl;
//     cout<<*(arr+1)<<endl;

//     cout<<2[arr]<<endl;
//     cout<<*(2+arr)<<endl;
// }
// Output =
// 25
// 25
// 45
// 45

// =============================================
// Move Location of array and pointer
int main(){
//     int arr = 10;
//     int *ptr = &arr;

    //value will increase only 

    // cout<<arr+2<<endl;    //10 
    // cout<<ptr+1<<endl;   //it will create garbage value

    // store value in array and pointer
    // arr = arr + 2;
    // ptr = ptr + 2;
    // cout<<"in array : "<<arr<<endl;
    // cout<<"in pointer : "<<ptr<<endl;

    // ===================================

    int brr [4] ={10,20,30,40};
    //in pointer can be accesses sub part of array
    // brr =brr+2;  //can't accesses

    int *p = brr;
    p = p + 2;
    
    cout<<*p<<endl;  //pointer can be access 
    
}

// int main(){
//     int arr[4]={5,6,7,8};
//     int *p = arr;
//     int *q = arr+1;

//     cout<<arr<<endl;
//     cout<<&arr<<endl;
//     cout<<arr[0]<<endl;
//     cout<<&arr[0]<<endl;
//     cout<<p<<endl;
//     cout<<&p<<endl;
//     cout<<*p<<endl;
//     cout<<q<<endl;
//     cout<<&q<<endl;
//     cout<<*q<<endl;
//     cout<<*(p)+1<<endl;
//     cout<<*(p)+2<<endl;
//     cout<<*(p)+3<<endl;
//     cout<<*(p)+4<<endl; //error 

// }

// Output = 
// 0x61ff00
// 0x61ff00
// 5
// 0x61ff00
// 0x61ff00
// 0x61fefc
// 5
// 0x61ff04
// 0x61fef8
// 6
// 6
// 7
// 8
// 9

// ===============================================