#include<iostream>
using namespace std;
int main(){
    int Marks;
    cout<<"Enter Your Marks : "<<endl;
    cin>>Marks;

    switch(Marks/10){
        case 10: cout<<"Grade A "<<endl;
        break;
        case 9: cout<<"Grade B"<<endl;
        break;
        case 8: cout<<"Grade C"<<endl;
        break;
        case 7: cout<<"Grade D"<<endl;
        break;
        case 6: cout<<"Grade E"<<endl;
        break;
        default: cout<<"Grade F"<<endl;
    }
}