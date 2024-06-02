#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int b = 3;

    cout<<a+b<<endl;
    cout<<a-b<<endl;
    cout<<a*b<<endl;
    cout<<a%b<<endl;
    cout<<a/b<<endl;

    cout<<(5.0)/(3.0)<<endl;
    cout<<(float(5))/(3)<<endl;
    cout<<(double(5))/(3)<<endl;
    cout<<(5)/(double(3))<<endl;

    // Relational operator 
    int aa =5;
    int bb = 3;
    cout<< (aa<bb) <<endl;
    cout<< (aa == bb) <<endl;
    cout<< (aa != bb) <<endl;
    cout<< (aa >= bb) <<endl;
    cout<< (aa <= bb) <<endl;

    // Assignment Operator
    int aaa = 5;
    cout<<aaa<<endl;

    // Logical Operator
    // && , || , !

    cout<<(aa >= 5 && bb <= 3)<<endl;

    cout<<(aa < 5 && bb >= 3)<<endl;

    cout<<(aa < 5 || bb >= 3)<<endl;

    cout<<(aa < 5)<<endl;
    cout<<!(aa < 5)<<endl;
}