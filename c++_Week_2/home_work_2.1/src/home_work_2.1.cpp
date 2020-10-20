#include <iostream>
using namespace std;

int Factorial(int x){
	int multiply = 1;
	for (int i = 1; i <= x; i ++){
		multiply *= i;
	}
	return multiply;
}

int main() {
	int n;
	cin >> n;
	if (n <= 0)
	{
		cout << 1;
		return 0;
	}
	cout << Factorial(n);
	return 0;
}
