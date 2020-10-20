#include <string>
#include <iostream>
using namespace std;

bool IsPalindrom(string s){
	for (int i = 0; i < s.size(); i++){
		if (s[i] != s[s.size() - i - 1])
			return false;
	}
	return true;
}

int main() {
	string str;
	cin >> str;
	if (str.empty()){
		cout << 1;
		return 0;
	}
	cout << IsPalindrom(str);
	return 0;
}
