#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(){
	int n;
	cin >> n;
	set<string> words;
	string s;
	for (int i = 0; i < n; ++i){
		cin >> s;
		words.insert(s);
	}
	cout << words.size() << endl;
}
