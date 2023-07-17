#include<iostream>
using namespace std;

// void PrintName(){
//     int n;
//     cout<<"Enter the Number"<<endl;
//     cin>>n;

//     for(int i=0; i<n; i++){
//         cout<<"Sushant Balu Patil "<<endl;
//     }
// }

// int main(){
//     PrintName();
// }

// =================================================

// void PrintSum(){
//     int n;
//     cout<<"Enter Number :";
//     cin>>n;

//     int sum=0;
//     for(int i=0; i<=n; i++){
//         sum=sum+i;
//         cout<<sum<<endl;

//     }
//     cout<<"Final Sum = "<<sum<<endl;
// }

// int main(){
//     PrintSum();
// }

// Output =
// Enter Number :5
// 0
// 1
// 3
// 6
// 10
// 15
// Final Sum = 15

// ========================================================

// int PrintB(int B){
//     cout<<"In B Function "<<endl;
//     cout<<B<<endl;
// }

// int PrintA(int A){
//     cout<<"In A Function "<<endl;
//     int b=15;
//     cout<<A<<endl;
//     PrintB(b);
// }

// int main(){
//     cout<<"In a Main Function "<<endl;
//     int a=5;
//     PrintA(a);
//     return 0;
// }

// Output =
// In a Main Function 
// In A Function 
// 5
// In B Function 
// 15

// ==========================================================

// int PrintNum(int a){
//     cout<<"In Function PrintNum "<<endl;
//     cout<<a<<endl;
//     a++;
//     cout<<"increment is = "<<a<<endl;
// }

// int main(){
//     cout<<"In Main Function "<<endl;
//     int a =5;
//     PrintNum(a);
//     cout<<"In Main = "<<a<<endl;
// }

// Output = 
// In Main Function 
// In Function PrintNum 
// 5
// increment is = 6
// In Main = 5

// =========================================================

// int PrintNum(int num){
//     cout<<"In PrintNum Function "<<endl;
//     ++num;
//     num++;
//     cout<<"Value in PrintNum = "<<num<<endl;
//     --num;
// }

// int main(){
//     cout<<"In Main Function "<<endl;
//     int num =12;
//     num++;
//     ++num;
//     PrintNum(num);
//     // --num;
//     num--;
//     cout<<"Value in Main = "<<num<<endl;
// }

// Output =
// In Main Function
// In PrintNum Function
// Value in PrintNum = 16
// Value in Main = 13

// ===========================================================

// Question = Write a function to add 2 number

// int GetSum(int a,int b){
//     int result = a + b;
//     return result;
// }

// int main(){
//     int a;
//     cout<<"Enter First number : "<<endl;
//     cin>>a;
//     int b;
//     cout<<"Enter Second number : "<<endl;
//     cin>>b;

//     int Sum = GetSum(a,b);
//     cout<<"Sum is = "<<Sum<<endl;
// }

//  ======================== OR ========================

// Function Declaration
// int GetSum(int a,int b);

// // Main Function 
// int main(){
//     int a;
//     cout<<"Enter First number : "<<endl;
//     cin>>a;
//     int b;
//     cout<<"Enter Second number : "<<endl;
//     cin>>b;

//     int Sum = GetSum(a,b);
//     cout<<"Sum is = "<<Sum<<endl;
// }

// // function Definations 
// int GetSum(int a,int b){
//     int result = a + b;
//     return result;
// }

// Output =
// Enter First number : 
// 5
// Enter Second number : 
// 45
// Sum is = 50

// =====================================================

// question = find max of 3 number 

// int FindMaxNumber(int a, int b, int c){
//     if(a>b && a>c){
//         cout<<"Max is A = "<<a<<endl;
//         return a;
//     }
//     else if(b>a && b>c){
//         cout<<"Max is B = "<<b<<endl;
//         return b;
//     }
//     else{
//         cout<<"Max is C = "<<c<<endl;
//         return c;
//     }
// }

// int main(){
//     int a,b,c;
//     cin>>a>>b>>c;

//     int Max = FindMaxNumber(a,b,c);
//     cout<<"Maximum Number : "<<Max<<endl;
// }

// Output = 
// 54
// 25
// 66
// Max is C = 66      
// Maximum Number : 66

// ========================================================

// Question = Counting from 1 to n

// void counting(int n){
//     for(int i=1; i<=n; i++){
//         cout<<i<<" ";
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter Number : " <<endl;
//     cin>>n;

//     counting(n);
//     return 0;
// }

// Output =
// 5
// 1 2 3 4 5 

// ===================================================

// Write a function of student and grade problem

// char GetGrade(int marks){
//     if(marks>=100){
//         return 'A';
//     }
//     else if(marks>=90){
//         return 'A';
//     }
//     else if(marks>=80){
//         return 'B';
//     }
//     else if(marks>=70){
//         return 'C';
//     }
//     else if(marks>=60){
//         return 'D';
//     }
//     else{
//         return 'E';
//     }
// }

// int main(){
//     int Marks;
//     cout<<"Enter Marks = "<<endl;
//     cin>>Marks;

//     char FinalGrade = GetGrade(Marks);
//     cout<<FinalGrade<<" is final grade "<<endl;

// }

// ==================== USing Switch Case ===========================

// int GetGrade(int marks){
//     switch (marks/10)
//     {
//     case 10:
//         return 'A';
//         break;
//     case 9:
//         return 'A';
//         break;
//     case 8:
//         return 'B';
//         break;
//     case 7:
//         return 'B';
//         break;
//     case 6:
//         return 'D';
//         break;        
//     default:
//         return 'E';
//         break;
//     }
// }

// int main(){
//     int Marks;
//     cout<<"Enter Marks = "<<endl;
//     cin>>Marks;

//     char FinalGrade = GetGrade(Marks);
//     cout<<FinalGrade<<" is final grade "<<endl;

// }

// Output =
// Enter Marks = 
// 81
// B is final grade 

// =============================================================
