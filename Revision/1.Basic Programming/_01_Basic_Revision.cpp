#include<iostream>
using namespace std;
int main(){
    cout<<"Hello Word"<<endl;
    
    // casting implicit
    char ch = 102;
    cout<<"ch : "<<ch<<endl;

    int num = 'g';
    cout<<"num : "<<num<<endl;

    // explicit costing
    double da = 7.5;

    int x = (int)da + 2;
    int y = da;

    cout<<"x : "<<x<<endl;
    cout<<"y : "<<y<<endl;

}