#include<iostream>
using namespace std;
int main(){
    int a = 10;
    cout<<"value of a is : "<<a<<endl;

    char ch = 'a';
    cout<<"value of ch is : "<<ch<<endl;

    // boolean
    bool flag = true;
    cout<<"value of flag is  "<<flag<<endl;

    // finding the space
    int b = 5;
    cout<<sizeof(a)<<endl;

    short c = 4;
    cout<<sizeof(c)<<endl;

    char d = 5;
    cout<<sizeof(d)<<endl;

    bool e = 5;
    cout<<sizeof(e)<<endl;

    float f = 6;
    cout<<sizeof(f)<<endl;

    double g = 7;
    cout<<sizeof(g)<<endl;

    long h = 5;
    cout<<sizeof(h)<<endl;

    long long i = 5;
    cout<<sizeof(i)<<endl;

    // Type casting 
    // implicit type conversion
    char cha = 97;
    cout<<cha<<endl;

    int num = 'b';
    cout<< num << endl;

    // explicit type conversion
    double da = 5.7;

    int x = (int)d + 2;
    int y = da;
    cout<<"value of x is : "<< x <<endl;
    cout<<"value of y is : "<< y <<endl;

    // Warning is overflow in implicit Constant Conversion Overflow. 
    char cn = 234234;
    cout<<cn<<endl;
}