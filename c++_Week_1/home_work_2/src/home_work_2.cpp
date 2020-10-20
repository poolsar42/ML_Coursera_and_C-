#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string x, y, z;
	cin >> x >> y >> z;
	cout << min(min(x, y), z);
	return 0;
}
