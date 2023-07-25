#include<iostream>
using namespace std;

// multiples two number

// int main(){
//     int a;
//     int b;

//     cin>>a>>b;
//     int product = a * b;
//     cout<<"multiplication = "<<product<<endl;
// }

// Output = 
// 15
// 2
// multiplication = 30

// =======================================

// find perimeter of a triangle
// Perimeter = sum of all side of triangle

// int main(){
//     int side_A, side_B, side_C;

//     cout<<" Enter three side length on by one "<<endl;
//     cin>>side_A>>side_B>>side_C;

//     int perimeter = side_A+side_B+side_C;
//     cout<<"Perimeter of triangle is : "<<perimeter<<endl;
// }

// Output = 
// Enter three side length on by one
// 10 
// 20
// 30
// Perimeter of triangle is : 60

// ========================================

// find simple interest

// int main(){
//     int principal;
//     int rate;
//     int time;

//     cout<<"Enter the principal value : "<<endl;
//     cin>>principal;

//     cout<<"Enter the rate of interest : "<<endl;
//     cin>>rate;

//     cout<<"Enter the time period : "<<endl;
//     cin>>time;

//     int simple_interest = ((principal*rate*time)/100);

//     cout<<"Total Simple interest is : "<<simple_interest<<endl;
// }

// Output =
// Enter the principal value : 
// 10
// Enter the rate of interest : 
// 10
// Enter the time period : 
// 1
// Total Simple interest is : 1

// ======================================================

// print counting from n to 1
// int main(){
//     int n;
//     cin>>n;

//     for(int i=n; i>=1; i--){
//         cout<<i<<endl;
//     }
// }

// Output = 5
// 5
// 4
// 3
// 2
// 1

// ============================================

// find factorial of a number 

// int main(){
//     int n;
//     cout<<"Enter number to find factorial : "<<endl;
//     cin>>n;

//     int fact = 1;
//     for(int i=n; i>=1; i--){
//         fact = fact * i;
//     }
//     cout<<"Factorial : "<<fact;
// }

// Output = 
// Enter number to find factorial : 
// 5
// Factorial : 120

// ====================================================

// check number is prime or not

// int main(){
//     int n;
//     cout<<"Enter number check prime or not : "<<endl;
//     cin>>n;

//     int IsPrime = true;
//     for(int i=2; i<n; i++){
//         if(n%i == 0){
//             IsPrime =false;
//             break;
//         }
//     }

//     if(IsPrime){
//         cout<<"Number is prime !"<<endl;
//     }
//     else{
//         cout<<"Number is not prime !"<<endl;
//     }
// }

// Output = 
// Enter number check prime or not : 
// 5
// Number is prime !

// =========================================================

// C++ Program to find Prime Numbers between given range

// void findRange(int l, int r){
//     int flag;
//     for(int i=l; i<=r; i++){
//         if(i==0 || i==1){
//             continue;
//         }
//         flag = 1;
//         for(int j=2; j<=i/2; j++){
//             if(i%j == 0){
//                 flag = 0;
//                 break;
//             }
//         }
//         if(flag == 1){
//             cout<<i<<" ";
//         }
//     }
// }

// int main(){ 
//     int l = 1;
//     int r = 10;

//     findRange(l,r);

// }

// Output = 2 3 5 7 

// =====================================================

// Check given triangle is valid or not 

// int main(){
//     int a,b,c;
//     cout<<"enter Length of Three side of triangle : "<<endl;
//     cin>>a>>b>>c;

//     if((a+b)>c && (b+c)>a && (a+c)>b){
//         cout<<"Triangle is valid "<<endl;
//     }
//     else{
//         cout<<"Triangle is not valid "<<endl;
//     }
// }

// Output = 

// enter Length of Three side of triangle : 
// 10
// 20
// 20
// Triangle is valid 

// enter Length of Three side of triangle : 
// 1
// 3
// 0
// Triangle is not valid 

// ======================================================

// Print only even number from 1 to N

// int main(){
//     int n;
//     cout<<"Enter number : ";
//     cin>>n;

//     cout<<"Printing the even number : ";
//     for(int i=2; i<=n; i+=2){
//         cout<<i<<" ";
//     }
// }

// Output = 
// Enter number : 10
// Printing the even number : 2 4 6 8 10 

// =======================================

// Print only odd number from 1 to N

// int main(){
//     int n;
//     cout<<"Enter number : ";
//     cin>>n;

//     cout<<"Printing odd number : ";
//     for(int i=1; i<=n; i+=2){
//         cout<<i<<" ";
//     }
// }

// Output =
// Enter number : 10
// Printing odd number : 1 3 5 7 9 

// ============================================

// print maximum of three number

// int main(){
//     int a,b,c;
//     cout<<"Three number one by one : "<<endl;
//     cin>>a>>b>>c;

//     if(a>b){
//         if(a>c){
//             cout<<a<<" is grater"<<endl;
//         }
//         else{
//             cout<<c<<" is grater"<<endl;
//         }
//     }
//     else{
//         if(b>c){
//             cout<<b<<" is grater"<<endl;
//         }
//         else{
//             cout<<c<<" is grater"<<endl;
//         }
//     }
// }

// Output =
// Three number one by one : 
// 12 
// 25
// 30
// 30 is grater

// Three number one by one : 
// 75
// 12
// 54
// 75 is grater

// Three number one by one : 
// 55
// 85
// 53
// 85 is grater

// ================================================

