#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

int main() {
	//1
	vector<string> nums = {"1", "2", "4", "4", "5-"};
	for (auto c: nums){
		cout << c << ",";
	}
	//2
	vector<int> nums_1 = {9, 19, 1, 2, 3, 4, 5, 5, 5};
	int quantity = count(begin(nums_1), end(nums_1), 5);
	cout << endl << quantity << endl;
	//3
	sort(begin(nums_1), end(nums_1));
	for (auto x: nums_1){
		cout << x << " ";
	}
	//4
	int x = 4;
	string y = "xxx";
	cout << x << ' ' << y << endl;
	//5
	string name;
	cin >> name;
	cout << name << endl;
	//6
	string s = "hello";
	string t = s;

	t += ", world";
	cout << s << endl;
	cout << t << endl;

	//7
	vector<int> v = {1, 2, 3};
	vector<int> w = v;

	w[0] = 2;

	cout << w[0] << ' ' << w[1] << endl;
	cout << v[0] << ' ' << v[1] << endl;

	//8
	vector<string> a = {"fire", "water"};
	vector<string> b = {"fog", "forest"};

	if (a == b){
		cout << "a is equal to b" << endl;
	}
	else{
		cout << "a isn't equal to b" << endl;
	}

	map<string, int> a1;
	a1["one"] = 1;
	map<string, int> b1;
	b1["one"] = 2;

	if (a1 == b1){
		cout << "a1 is equal to b1" << endl;
	}
	else{
		cout << "a1 isn't equal to b1" << endl;
	}

	//9
	map<string, int> str = {{"a", 1}, {"b", 2}, {"c", 3}};

	int sum = 0;
	string concat;
	for (auto i: str){
		sum += i.second;
		concat += i.first;
	}

	cout << sum << endl << concat << endl;

	return 0;
}
