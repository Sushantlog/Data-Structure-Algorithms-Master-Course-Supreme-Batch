#include<iostream>
using namespace std;

int main(){
    bool a= true;
    bool b=false;
    bool c=true;
    bool d=true;
    bool e=false;
    bool f=false;
    cout<<(a&b)<<endl;     // 0
    cout<<(c&d)<<endl;     // 1
    cout<<(a|b)<<endl;     // 1
    cout<<(c|d)<<endl;     // 1
    cout<<(e|f)<<endl;     // 0
    cout<<~(a)<<endl;      // -2        //! Not understand
    cout<<~(~a)<<endl;     // 1
    cout<<~(b)<<endl;      // -1
    cout<<~(~b)<<endl;     // 0 
    cout<<(a^b)<<endl;     // 1
    cout<<(c^d)<<endl;     // 0
}