#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int b = 15;

    cout<<"Arithmetic Operator"<<endl;
    cout<<"a+b : "<<a+b<<endl;
    cout<<"a-b : "<<a-b<<endl;

    cout<<"Relational operator"<<endl;
    cout<<"(a<b) : "<<(a<b)<<endl;
    cout<<"(a==b) : "<<(a==b)<<endl;

    cout<<"Assignment Operator"<<endl;
    int c = 55;
    cout<<"c : "<<c<<endl;
    // c = c + 5;
    c += 5;

    cout<<"c+=5 : "<<(c)<<endl;
    cout<<"c-=5 : "<<(c-=5)<<endl;

    cout<<"Logical Operator"<<endl;
    cout<<"(a >= 5 && b <= 20) : "<<(a >= 5 && b <= 20)<<endl; //both are true then all true 
    cout<<"(a >= 5 && b <= 14) : "<<(a >= 5 && b <= 14)<<endl; //if any one get false then all false
    cout<<"(a >= 5 || b <= 14) : "<<(a >= 5 || b <= 14)<<endl; //if any one is true and both are true then true 
    cout<<"(a >= 6 || b <= 14) : "<<(a >= 6 || b <= 14)<<endl; //both false then false

    bool aa = true;
    bool bb = false;

    if (aa && bb) {
        // This won't execute because b is false
        cout<<"&& Execute "<<endl;
    }

    if (aa || bb) {
        // This will execute because a is true
        cout<<"|| Execute "<<endl;
    }

    if (!bb) {
        // This will execute because b is false, so !b is true
        cout<<"! Execute "<<endl;
    }



}