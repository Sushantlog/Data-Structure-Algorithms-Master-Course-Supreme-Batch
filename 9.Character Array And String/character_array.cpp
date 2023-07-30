#include<iostream>
#include<string.h>
using namespace std;

// int main(){
//     char ch[100];
//     cout<<"Enter Your Name : ";
//     cin>>ch;

//     cout<<"My Name is "<<ch;
// }

// Output = 
// Enter Your Name : Sushant 
// My Name is Sushant

// ======================================================

//This will be can not read null character after completing cin input then 
// automatic add null character

// int main(){ 
//     char ch[100];
//     cout<<"Enter Your Name : "<<endl;
//     cin>>ch;                    //Sushant Patil but this will print only Sushant

//     cout<<"My Name is "<<ch<<endl;      //Tab ,Enter,Space
// }

// Output = 
// Enter Your Name : 
// Sushant Patil
// My Name is Sushant

// =======================================================

// Above Problem can be Handel by getline function => cin.getline(arr,50);

// int main(){
//     char ch[1000];

//     cout<<"endter full name : "<<endl;
//     // getline(cin,ch);
//     cin.getline(ch,60);

//     cout<<"My Full Name is "<<ch<<endl;
// }

// Output =
// endter full name : 
// Sushant Balu Patil
// My Full Name is Sushant Balu Patil

// =======================================================

// Length Of String 

// int getLength(char name[]){
//     int length = 0;
//     int i = 0 ;
//     while(name[i] != '\0'){
//         length ++;
//         i++;
//     }
//     return length;
// }

// int main(){
//     char name[100];
//     cout<<"Enter String : "<<endl; 
//     cin>>name;

//     cout<<"Length is : "<<getLength(name)<<endl;
//     cout<<"Length Of Predefine (strlen) : "<<strlen(name)<<endl;
//     return 0;
// }

// Output =
// Sushant
// Length is : 7
// Length Of Predefine (strlen) : 7
// ======================================================



