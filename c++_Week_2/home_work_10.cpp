#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> days {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	vector<vector<string>> deals;
	int next = 0;
	deals.resize(days[next]);
	string s;
	for (int i = 0; i < n; ++i){
		cin >> s;
		if (s == "ADD"){
			int k;
			string deal;
			cin >> k >> deal;
			k --;
			deals[k].push_back(deal);
		}
		if (s == "DUMP"){
			int k;
			cin >> k;
			k --;
			cout << deals[k].size() << ' ';
			for (auto i: deals[k])
				cout << i << ' ';
			cout << endl;
		}
		if (s == "NEXT"){
			int prev = next;
			next += 1;
			next %= 12;
			if (days[next] < days[prev]){
				for (auto j = days[next]; j < days[prev]; j ++){
					deals[days[next] - 1].insert(end(deals[days[next] - 1]), begin(deals[j]), end(deals[j]));
					deals[j].clear();
				}
			}
			deals.resize(days[next]);
		}
	}
	return 0;
}
