#include <iostream>
#include <vector>
#include <string>

using namespace std;

void PrintVector(const vector<string>& v){
	for(auto s: v){
		cout << s << ' ' ;
	}
	cout << endl;
}

void PrintVector_int(const vector<int>& v){
	for (auto s: v){
		cout << s << ' ';	
	}
	cout << endl;
}

int main(){
	int n;
	cin >> n;
	vector<string> v(n);
	for (string& s: v) {
		cin >> s;
	}
	PrintVector(v);
	
	vector<string> ch;
	for (auto i = 0; i < n; ++i){
		string s;
		cin >> s;
		ch.push_back(s);
	}
	PrintVector(ch);

	vector<int> days_in_month = {21, 12, 14, 31, 16};
	PrintVector_int(days_in_month);

	vector<bool> f(28, false);
	f.resize(31);

	f.assign(31, false);
	
	f.clear();

	return 0;
}
