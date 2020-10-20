#include <vector>
#include <iostream>
using namespace std;

int main() {
	int n;
	vector<int> f;
	cin >> n;
	while (n > 0){
		f.push_back(n % 2);
		n /= 2;
	}
	for (int i = f.size() - 1; i >= 0; i --)
		cout << f[i];
	return 0;
}
