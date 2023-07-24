#include<iostream>
using namespace std;

// The below code snippet has some errors. Let’s debug it and make it compile & run successfully.

// void main() {
// 	int i=0;
// 	i=i+1;
// 	cout<<i;
// 	/*print i */// i=i+1
// 	cout<<++i;
// }

// int main() {
//     int i=0;
//     i=i+1;
//     cout<<i;
//     /*print i *///i=i+1
//     cout<<++i;
// }

// Output = 12

// ========================================

// Below code should print the sum of ‘i’ and ‘j’.

// int main() {
// 	short i=2300, j=4322;
// 	cout<<"i+j="<<(i+j);
// }

// Output = i+j=6622

// =============================================

// Find perimeter of a rectangle.

// int main() {
// 	float l, b;
// 	float P = 2*(l+b);
// 	cout<<"Perimeter="<< P;
// }

// Output = Perimeter=2.9773e-038

// ===========================================

// Print solid square pattern.

// int main() {
// 	int n;
//     cin>>n;
//     for (int i=0; i<n; ++i) {
//         for (int j=0; j<n; ++j) {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// Output = 
// 5
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 

// ============================================

// Check given number is Prime or not.

int main(){
	int n;
	cin >> n;
	bool isPrime = true;
    for(int i=2;i<n;i++){
        if(n%i == 0){
            isPrime = false; 
            break;
        }
    }
	if(isPrime){
		cout<<"Prime"<<endl;	
	}
	else{
		cout<<"Not Prime"<<endl;	
	}
    return 0;
}

// Output = 
// 12
// Not Prime

// 13
// Prime

// =========================================
