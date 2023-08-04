#include <bits/stdc++.h>
using namespace std;

// void SieveOfEratosthenes(int n) {
// 	vector<bool> prime(n,true);
// 	for (int p = 2; p * p <= n; p++) {
// 		if (prime[p] == true) {
// 			for (int i = p * p; i <= n; i += p)
// 				prime[i] = false;
// 		}
// 	}

// 	for (int p = 2; p <= n; p++)
// 		if (prime[p])
// 			cout << p << " ";
// }

// int main() {
// 	int n = 50;
// 	SieveOfEratosthenes(n);
// 	return 0;
// }

// =================================================================================

// #include <bits/stdc++.h>
// using namespace std;

// void SieveOfEratosthenes(int n) {
// 	vector<bool> prime(n,true);
// 	for (int p = 2; p * p <= n; p++) {
// 		if (prime[p] == true) {
// 			for (int i = p * p; i <= n; i += p)
// 				prime[i] = false;
// 		}
// 	}

// 	for (int p = 2; p <= n; p++)
// 		if (prime[p])
// 			cout << p << " ";
// }

// int main()
// {
// 	int n = 50;
// 	SieveOfEratosthenes(n);
// 	return 0;
// }


// ======================================  2  ======================================

// int main() {
//     int* p = new int ;
//     *p = 42;
//     delete p;
//     return 0;
// }

// ======================================  3  =================================
// int* foo() {
//     int *p = new int;
//     * p = 10;
//     return p;
// }

// int main() {
//     int* q = foo();
//     cout << *q << endl; // Expected output: 10, Actual output: some random value
//     return 0;
// }
// 10
// =================================== 4 ==================================

// int main() {
//     int* p ;
//     *p = 10;
//     return 0;
// }

// =================================== 5 ===============================

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr = arr;
    cout << "The value of the third element in arr is " << *(ptr + 2) << endl;
    return 0;
}




