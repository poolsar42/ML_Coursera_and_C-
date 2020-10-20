#include <iostream>
using namespace std;

int main() {
	int A, B;
	cin >> A >> B;
	for (auto i = A; i <= B; i ++){
		if (i % 2 == 0){
			if (B - i >= 2)
				cout << i << ' ';
			else
				cout << i;
		}
	}
	return 0;
}
