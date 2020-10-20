#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double A, B, C;
	cin >> A >> B >> C;
	double D = pow(B, 2) - 4 * A * C;
	if (A != 0 && D >= 0) {
		if ((-1 * B + sqrt(D))/(2 * A) != (-1 * B - sqrt(D))/(2* A)){
			cout << (-1 * B + sqrt(D))/(2 * A) << ' ' <<  (-1 * B - sqrt(D))/(2* A);
		}
		else {
			cout << (-1 * B + sqrt(D))/(2 * A);
		}
	}
	else {
		if (D >= 0 && B != 0){
			cout << -C / B;
		}
	}
	return 0;
}
