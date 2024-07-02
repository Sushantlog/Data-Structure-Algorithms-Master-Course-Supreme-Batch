#include<iostream>
using namespace std;

char getGread(int Marks){
    if(Marks>=90){
        return 'A';
    }else if(Marks>=80){
        return 'B';
    }else if(Marks>=70){
        return 'C';
    }else if(Marks>=60){
        return 'D';
    }else{
        return 'E';
    }
}
int main(){
    int Marks;
    cout<<"Enter the Marks : ";
    cin>>Marks;

    char finalGrade = getGread(Marks);
    cout<<"Final Grade : "<<finalGrade<<endl;
}