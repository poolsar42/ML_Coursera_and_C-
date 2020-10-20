#include <iostream>
using namespace std;

int main() {
	long long a, b;
	cin >> a >> b;
	if (b == 0){
		cout << "Impossible";
		return 0;
	}
	cout << a / b;
	return 0;
}
