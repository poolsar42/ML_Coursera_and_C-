#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
	int n;
	cin >> n;
	string word_1, word_2;
	for (int i = 0; i < n; i ++){
		cin >> word_1 >> word_2;
		map <char, int> let_1, let_2;
		for (auto i: word_1)
			++ let_1[i];
		for (auto i: word_2)
			++ let_2[i];
		if (let_1 == let_2){
			cout << "YES" << endl;
			continue;
		}
		cout << "NO" << endl;
	}
	return 0;
}
