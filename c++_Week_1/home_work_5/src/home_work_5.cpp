#include <iostream>
using namespace std;

int main() {
	float N, A, B, X, Y;

	cin >> N >> A >> B >> X >> Y;

	if (N > A && N <= B){
		cout << N - (N * X / 100);
		return 0;
	}

	if (N > B){
		cout << N - (N * Y / 100);
		return 0;
	}
	cout << N;
	return 0;
}
