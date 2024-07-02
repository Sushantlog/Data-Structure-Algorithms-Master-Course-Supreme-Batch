#include<iostream>
using namespace std;

char getGread(int Marks){
    switch(Marks/10){
        case 10: return 'A';break;
        case 9 : return 'A';break;
        case 8 : return 'B';break;
        case 7 : return 'C';break;
        case 6 : return 'D';break;
        default: return 'E';
    }
}
int main(){
    // int Marks;
    // cout<<"Enter the Marks : ";
    // cin>>Marks;

    // char finalGrade = getGread(Marks);
    // cout<<"Final Grade is : "<<finalGrade;

    // check all
    for(int i=0; i<=100; i++){
        char ans = getGread(i);
        cout<<"Grade for Marks : "<<i<<" is "<<ans<<endl;
    }
    return 0;
}