#include<iostream>
using namespace std;

// int main(){
    // int arr[10];
    // cout<<sizeof(arr)<<endl;
    
    // int *p =arr;
    // cout<<sizeof(p)<<endl;

// }

// 40
// 4

// =========================================

// int main(){
//     char ch[10]="Sushant";
//     char *c = ch;

//     cout<<ch<<endl;
//     cout<<&ch<<endl;   //address of first location (address of ch)
//     cout<<ch[0]<<endl;

//     cout<<&c<<endl;
//     cout<<*c<<endl;  //accesses 0th position value *(c+0) => S
//     cout<<c<<endl;   //full string will print not one character

// }

// Output = 
// Sushant
// 0x61ff06
// S
// 0x61ff00
// S
// Sushant

// ============================================

// int main(){
//     char  name[10]={"SherBano"};
//     char *c = &name[0];

    //this three are pointing to base address of string (charater)
    //in charater full string will print 
    // cout<<name<<endl;  
    // cout<<c<<endl;
    // cout<<&name[0]<<endl;

    // cout<<"============================="<<endl;
    // cout<<name<<endl;
    // cout<<&name<<endl;
    // cout<<*(name+3)<<endl;
    // cout<<name[3]<<endl;
    // cout<<c+2<<endl;  //this will start from 2 location 
    // cout<<*c<<endl;
    // cout<<c+8<<end;  //generate error

// }
// Output = 
// SherBano
// SherBano
// SherBano
// =============================
// SherBano
// 0x61ff02
// r
// r
// erBano
// S

// ===========================================================

// int main(){
//     char ch = 'k'; //can't be present null pointer
//     char *cptr = &ch;

//     cout<<cptr<<endl;

//     char name[10] = "Sushant";
//     cout<<name<<endl;
    
//     char *c = "Sushant"; //bad practice
//     cout<<c<<endl;
    
// }

// Output = 

// ================================================

// void solve(int arr[]){
//     cout<<"size inside solve function "<<sizeof(arr)<<endl;
//     cout<<"arr : "<<arr<<endl;
//     cout<<"&arr : "<<&arr<<endl;

//     arr[0]=50;
// }

// int main(){
//     int arr[10]={1,2,3,4};
//     cout<<"Size inside main function : "<<sizeof(arr)<<endl;
//     cout<<arr<<endl;
//     cout<<&arr<<endl;
//     cout<<*(arr)<<endl;  //pointing to base address
//     cout<<*(&arr)<<endl; //pointing to base address

//     cout<<"Printing array inside main "<<endl;
//     for(int i=0; i<10;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     cout<<endl<<"Now Calling Solve Function "<<endl;

//     solve(arr);

//     cout<<"Retune back to main function "<<endl;
//     for(int i =0; i<10; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

// }

// Output = 
// Size inside main function : 40
// 0x61fee0
// 0x61fee0
// 1
// 0x61fee0
// Printing array inside main    
// 1 2 3 4 0 0 0 0 0 0 

// Now Calling Solve Function    
// size inside solve function 4  
// arr : 0x61fee0
// &arr : 0x61fed0
// Retune back to main function  
// 50 2 3 4 0 0 0 0 0 0 

// ========================================================

// void update(int *p){
//     cout<<"Address stored inside p is : "<<p<<endl;
//     cout<<"Address of p is : "<<&p<<endl;
//     *p = *p +10;
// }

// int main(){
//     int a = 5;
//     cout<<"Address of a is : "<<&a<<endl;
//     int *ptr = &a;
//     cout<<"address stored in ptr is : "<<ptr<<endl;
//     cout<<"Address of ptr is : "<<&ptr<<endl;
//     update(ptr);
//     cout<<"Value of a is : "<<a<<endl;

// }

// Output = 
// Address of a is : 0x61ff0c
// address stored in ptr is : 0x61ff0c       
// Address of ptr is : 0x61ff08
// Address stored inside p is : 0x61ff0c     
// Address of p is : 0x61fef0
// Value of a is : 15

// ======================================================
