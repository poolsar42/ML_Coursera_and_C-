#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void Print(const vector<int>& v){
	for(auto i: v){
		cout << i << ' ';
	}
	cout << endl;
}

bool Gt2(int x){
	if (x > 2)
		return true;
	return false;
}

int main() {
	int a, b;
	//1
	cin >> a >> b;
	cout << min(a,b) << ' ' << max(a, b) << endl;
	vector<int> v =  {1, 2, 3, 4, 5};
	sort(begin(v), end(v));
	Print(v);
	//2
	int thr;
	cin >> thr;
	cout << count(begin(v), end(v), 2) << endl;
	cout << count_if(begin(v), end(v), Gt2) << endl;
	cout << count_if(begin(v), end(v), [thr](int x){
		if (x > thr)
			return true;
		return false;
	}) << endl;
	//3
	for (const auto& i: v){
		cout << i << ' ';
	}
	cout << endl;
	for (auto& i: v){
		++i;
	}
	Print(v);
}
