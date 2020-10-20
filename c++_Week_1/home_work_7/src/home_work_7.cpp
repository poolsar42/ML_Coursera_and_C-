#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	char f = 'f';
	bool flag = 0;
	for (int a = 0; a < s.size(); a++){
		if (s[a] == f && flag == 0){
			flag = 1;
		}
		else if (s[a] == f && flag == 1){
			cout << a;
			return 0;
		}
	}
	if (flag == 1){
		cout << -1;
		return 0;
	}
	cout << -2;
	return 0;
}
