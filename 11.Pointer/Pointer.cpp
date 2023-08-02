#include<iostream>
using namespace std;

// int main(){
//     int a = 5;
//     int *ptr = &a;

//     cout<<"a : "<<a<<endl;
//     cout<<"&a : "<<&a<<endl;
//     // cout<<"*a : "<<*a<<endl;  a is not pointer
//     cout<<"Ptr : "<<ptr<<endl;
//     cout<<"&ptr : "<<&ptr<<endl;
//     cout<<"*ptr : "<<*ptr<<endl;
// }
// Output =
// a : 5
// &a : 0x61ff0c
// Ptr : 0x61ff0c
// &ptr : 0x61ff08
// *ptr : 5

// =============================================================

// int main(){
//     // create Pointer
//     int a = 10;
//     int *ptr = &a;

//     cout<<"pointer will create successfully !";
// }
// Output = pointer will create successfully ! 

// ==============================================================

// int main(){
//     int a = 10;
//     int *ptr = &a;

//     cout<<"Dereference pointer (*ptr) : "<<*ptr<<endl;

// }
// Output = Dereference pointer (*ptr) : 10  

// ===========================================================

// int main(){
//     int a = 10;
//     int *ptr = &a;
//     cout<<sizeof(ptr)<<endl;   //Pointer will store address so size will be same

//     char ch = 'a';
//     char *p = &ch;
//     cout<<sizeof(p)<<endl;

//     double d = 10.05;
//     double *q = &d;

//     cout<<sizeof(q)<<endl; 

// }

// Output =
// 4
// 4
// 4
// ====================================================

// int main(){
//     int *n = nullptr;
//     cout<<"Crated null pointer ";
// }

// Output = 
// Crated null pointer

// =================================================

// Copy Pointer 

// int main(){
//     int a = 10;
//     int *ptr = &a;
//     int *q = ptr;
//     int *r = q;

//     cout<<a<<endl;
//     cout<<&a<<endl;  //&a and ptr pointing to same address
//     cout<<ptr<<endl;
//     cout<<&ptr<<endl;
//     cout<<*ptr<<endl;
//     cout<<q<<endl;
//     cout<<&q<<endl;
//     cout<<*q<<endl;
//     cout<<r<<endl;
//     cout<<&r<<endl;
//     cout<<*r<<endl;
//     cout<<(*ptr+*q+*r)<<endl;
//     cout<<(*ptr/2)-(*q/2)<<endl;
//     cout<<(*ptr*2)+(*r*3)<<endl;
// }

// Output =
// 10
// 0x61ff0c
// 0x61ff0c
// 0x61ff08
// 10
// 0x61ff0c
// 0x61ff04
// 10
// 0x61ff0c
// 0x61ff00
// 10
// 30
// 0
// 50

//======================================================

// int main(){
//     int a = 5;
//     int *ptr = &a;
//     int **p = &ptr;

//     cout<<a<<endl;
//     cout<<&a<<endl;
//     cout<<ptr<<endl;
//     cout<<&ptr<<endl;
//     cout<<*ptr<<endl;
//     cout<<p<<endl;
//     cout<<&p<<endl;
//     cout<<**p<<endl;

// }

// Output =
// 5
// 0x61ff0c
// 0x61ff0c
// 0x61ff08
// 5       
// 0x61ff08
// 0x61ff04
// 5  

// ==================================================


