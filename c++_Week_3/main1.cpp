#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

void Print(const vector<string>& v){
	for(const auto& i: v)
		cout << i << ' ';
	cout << endl;
}

int main(){
	int n;
	cin >> n;
	string str;
	vector<string> strings(n);
	for (int i =0; i< n; ++i){
		cin >> str;
		strings[i] = str;
	}
	sort(strings.begin(), strings.end(), [](string x, string y){
		string c ="";
	       	string d ="";
		// lexicographical_compare exists function in C++
		for(const auto& j: x)
			c += tolower(j);
		for(const auto& j: y)
			d += tolower(j);
		return (c < d);
	});
	Print(strings);
	return 0;
}
