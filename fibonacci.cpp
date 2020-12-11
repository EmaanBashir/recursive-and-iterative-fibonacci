#include <iostream>
#include <time.h>

using namespace std;

//Fibonacci class
class Fibonacci {

//public methods
public:

//iterative method
	long long int iterativeFibonacci(int n) {
		long long int n1 = 0, n2 = 1, sum;
		if (n == 1) return 0;
		if (n == 2) return 1;
		for (int i = 3; i <= n; i++) {
			sum = n1 + n2;
			n1 = n2;
			n2 = sum;
		}
		return n2;
	}

//recursive fibonacci
	long long int recursiveFibonacci(int n) {
		if (n == 1) return 0;
		if (n == 2) return 1;
		return recursiveFibonacci(n - 1) + recursiveFibonacci(n - 2);
	}
 };
