#include<iostream>
#include<string.h>
#include<algorithm>
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

// Reverse a string

// void ReverseString(char str[]){
//     int i = 0;
//     int n = strlen(str);
//     int j = n - 1;

//     while(i<=j){
//         swap(str[i],str[j]);
//         i++;
//         j--;
//     }
// }

// int main(){
//     char name[100];
//     cout<<"Enter a string : "<<endl;
//     cin>>name;

//     cout<<"Before Reverse Of String is : "<<name<<endl;
//     ReverseString(name);
//     cout<<"After Reverse Of String is : "<<name<<endl;

// }

// Output = 
// Sushant
// Before Reverse Of String is : Sushant     
// After Reverse Of String is : tnahsuS 

// babber
// Before Reverse Of String is : babber
// After Reverse Of String is : rebbab 

// =================================================

// Replace all space

// void replaceSpace(char Sentence[]){
//     int i = 0;
//     int n = strlen(Sentence);

//     for(int i = 0; i<n; i++){
//         if(Sentence[i]==' '){
//             Sentence[i] = '@';
//         }
//     }
// }

// int main(){
//     char sentence[100];
//     cout<<"Enter the String : "<<endl;
//     cin.getline(sentence,100);
//     replaceSpace(sentence);
//     cout<<"Printing the Sentence With Replace spaces "<<endl<<sentence<<endl;

// }

// Output = 
// Enter the String : 
// My Name is Sushant Patil 
// Printing the Sentence With Replace spaces 
// My@Name@is@Sushant@Patil@

// =======================================================

// Palindrome

// bool checkPalindrome(char Sentence []){
//     int i = 0;
//     int n = strlen(Sentence);
//     int j = n-1;

//     while(i<=j){
//         if(Sentence[i]!=Sentence[j]){
//             return false;
//         }
//         else{
//             i++;
//             j--;
//         }
//     }
//     return true;
// }

// int main(){
//     char sentence[100];

//     cout<<"Enter Sentence : ";
//     cin>>sentence;

//     cout<<"Check Palindrome : "<<checkPalindrome(sentence)<<endl;    
// }

// Output = 
// Enter Sentence : Anna
// Check Palindrome : 0

// Enter Sentence : anna
// Check Palindrome : 1

// ================================================

// Convert in upper case  (lower case => upper case)

// void ConvertWord(char word[ ]){
//     int n = strlen(word);
//     for(int i = 0 ; i<n; i++){
//         word[i]=word[i]-'a'+'A';
//     }
// }

// int main(){
//     char word[100];
//     cout<<"Enter word : ";
//     cin>>word;

//     cout<<"Before Converting : "<<word<<endl;
//     ConvertWord(word);                              //no need any extra declaration 
//     cout<<"After Converting : "<<word<<endl; 
// }

// Output =
// Enter word : laptop
// Before Converting : laptop
// After Converting : LAPTOP 
// ================================================

// Convert in lower case (upper case => lower case)

// void ConvertWord(char word[]){
//     int n = strlen(word);
//     for(int i = 0 ; i < n ; i++){
//         word[i] = word[i]-'A'+'a';
//     }
// }

// int main(){
//     char word[100];
//     cout<<"Enter word : ";
//     cin>>word;

//     cout<<"Before Converting Word : "<<word<<endl;
//     ConvertWord(word);
//     cout<<"After Converting Word : "<<word<<endl;

//     return 0;
// }

// Output =
// Enter word : LAPTOP
// Before Converting Word : LAPTOP
// After Converting Word : laptop 

// ================================================

