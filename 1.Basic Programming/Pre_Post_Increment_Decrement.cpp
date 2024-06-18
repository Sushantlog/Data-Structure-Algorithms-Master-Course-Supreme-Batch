#include<iostream>
using namespace std;

// 3

int main()
{
    int a = 5;
     cout<<(++a)*(++a)<<endl;  //! ans will 49 not 36 or 42  compiler dependent 

// The result 49 indicates that the compiler may have evaluated the expression (++a) * (++a) in a 
// specific order, causing a to be incremented twice before the multiplication. Let's explore how this 
// might happen:

// Given int a = 5;, the expression cout << (++a) * (++a) << endl; can be broken down into the following steps:

// ++a increments a from 5 to 6.
// ++a increments a from 6 to 7.

// Depending on how the compiler evaluates the expression, both increments could happen before 
// either of the a values are used in the multiplication. This results in:

// a becomes 6 after the first ++a.
// a becomes 7 after the second ++a.
// Both instances of ++a would then refer to 7.

// So, the multiplication would be 7 * 7, which is 49.

// This is consistent with undefined behavior, where the exact order of operations is not guaranteed. 
// To avoid this and ensure predictable results, separate the operations clearly:

// int a = 5;
// ++a;         // a becomes 6
// int result1 = ++a;  // a becomes 7, result1 is 7
// int result2 = a;    // result2 is 7
// cout << result1 * result2 << endl;  // Output will be 49

// In this way, you avoid modifying a multiple times in a single expression, ensuring the behavior 
// is well-defined.

    // --------------------------------------------------

    // int a = 3;
    // int b = 4;
    // int c = (++a)*(--b);
    // cout<<c;

    // int a =10,b,c;
    // b=a++; c=a;
    // cout<<a<<" "<<b<<" "<<c<<endl;

    // int a,b=10;
    // a = 95/10;
    // cout<<a<<" "<<endl;
    // return 0;

    // int a = 0;
    // int b = 6;
    // int c = 6/0; 
    // cout<<c<<" "<<endl;
} 