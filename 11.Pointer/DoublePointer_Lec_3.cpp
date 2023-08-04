#include<iostream>
using namespace std;

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
//     cout<<*p<<endl;
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
// 0x61ff0c
// 5

// ==================================================

// jab tak dereference nahi krta tab tak value change nahi hoti

// int util(int *ptr){
//     ptr = ptr + 1;
// }

// int main(){
//     int a = 5;
//     int *ptr = &a;

//     cout<<a<<endl;
//     cout<<ptr<<endl;
//     cout<<*ptr<<endl;

//     util(ptr);

//     cout<<"after function call "<<endl;
//     cout<<a<<endl;
//     cout<<ptr<<endl;
//     cout<<*ptr<<endl;

// }

// Output = 
// 5
// 0x61ff08
// 5
// after function call 
// 5
// 0x61ff08
// 5
// =======================================
// After dereference value
// int util(int *ptr){
//     *ptr = *ptr + 1;
// }

// int main(){
//     int a = 5;
//     int *ptr = &a;

//     cout<<a<<endl;
//     cout<<ptr<<endl;
//     cout<<*ptr<<endl;

//     util(ptr);

//     cout<<"after function call "<<endl;
//     cout<<a<<endl;
//     cout<<ptr<<endl;
//     cout<<*ptr<<endl;

// }
// Output =
// 5
// 0x61ff08
// 5
// after function call 
// 6
// 0x61ff08
// 6

// ======================================================

// int solve(int **p){
//     // p = p + 1;          

//     // *p = *p + 1;

//     **p = **p + 1;

// }

// int main(){
//     int s = 15;
//     int *b = &s;
//     int **p = &b;

//     solve(p);

//     cout<<s<<endl;

// }

// Output = 
// 15
// 15
// 16

// ================================================

// Reference Variable

// int main(){
//     int a = 5;
//     int &b = a;

//     cout<<a<<endl;
//     cout<<b<<endl;

// }

// Output =
// 5
// 5

// ======================================

// increment reference variable 

// int main(){
//     int a = 5;
//     int &b = a;

//     cout<<a<<endl;
//     cout<<b<<endl;
    
//     a++;
//     cout<<a<<endl;
//     cout<<b<<endl;
    
//     b++;
//     cout<<b<<endl;
//     cout<<a<<endl;
// }

// Output =
// 5
// 5
// 6
// 6
// 7
// 7

// ==========================================
// Pass by value in function 

// int solve(int a){
//     a++;         //copy will create 
// }

// int main(){
//     int a = 5;
    
//     solve(a);

//     cout<<a<<endl;
// }

// 5

// =================================
// pass by reference in function 

// int solve(int &val){
//     val++;
// }

// int main(){
//     int a =7;

//     solve(a);

//     cout<<a<<endl;
// }

// 8
//  =====================================================

int solve(int *val){
    val = val +1;
}

int main(){
    int a = 12;
    int *p = &a;

    solve(p);

    cout<<a<<endl;
}
