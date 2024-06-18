#include<iostream>
using namespace std;

// 5

// int main(){
//     int Marks;
//     cout<<"Enter Your Marks : "<<endl;
//     cin>>Marks;

//     switch (Marks/10)
//     {
//     case 10:
//         cout<<"Grade A ";
//         break;
//     case 9:
//         cout<<"Grade B ";
//         break;
//     case 8:
//         cout<<"Grade C ";
//         break;
//     case 7:
//         cout<<"Grade D ";
//         break;
//     case 6:
//         cout<<"Grade E ";
//         break;
//     default:
//         cout<<"Grade F ";
//         break;
//     }
// }

// Output = 
// Enter Your Marks : 
// 77
// Grade D 

// =========================================================

// #include<iostream>
// using namespace std;
// int main(){
//     int Marks;
//     cout<<"Enter Your Marks : "<<endl;
//     cin>>Marks;

//     switch (Marks/10)
//     {
//     case 10:
//         cout<<"Grade A ";
//         break;
//     case 9:
//         cout<<"Grade B ";
//         break;
//     case 8:
//         cout<<"Grade C ";
//         break;
//     case 7:
//         cout<<"Grade D ";
//         break;
//     case 6:
//         cout<<"Grade E ";
//         break;
//     default:
//         cout<<"Grade F ";
//         break;
//     }
// }

// =========================================================================

// Calculator using switch case 

int main(){
    int choice;
    int firstNum;
    int secondNum;

    cout<<"Enter first number : ";
    cin>>firstNum;
    cout<<"Enter Sencond number : ";
    cin>>secondNum;

    cout<<"Choices Are : 1.addition 2.subtraction 3.multiplication 4.division "<<endl;
    cout<<"Enter Your Choice : "<<endl;
    cin>>choice;

    switch (choice)
    {
    case 1:
        cout<<"Addition is : "<<firstNum+secondNum<<endl;
        break;
    case 2:
        cout<<"Subtraction is : "<<firstNum-secondNum<<endl;
        break;
    case 3:
        cout<<"Multiplication is : "<<firstNum*secondNum<<endl;
        break;
    case 4:
        cout<<"Division is : "<<firstNum/secondNum<<endl;
    default:
        cout<<"Enter valid choice ";
        break;
    }
}

// Output = 
// Enter first number : 45
// Enter Sencond number : 5
// Choices Are : 1.addition 2.subtraction 3.multiplication 4.division 
// Enter Your Choice : 
// 1
// Addition is : 50

