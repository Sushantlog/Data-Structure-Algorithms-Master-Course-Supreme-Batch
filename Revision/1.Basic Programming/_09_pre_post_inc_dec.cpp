#include<iostream>
using namespace std;
int main(){
    int a = 3;
    int b = 4;
    int c = (++a)*(--b);
    cout<<" a : "<<a<<endl;
    cout<<" b : "<<b<<endl;

    int aa,bb=10;
    aa=95/10;
    cout<<aa<<" "<<endl;

    float n;
    n = static_cast<float>(95)/10;
    cout<<n<<" "<<endl;
}