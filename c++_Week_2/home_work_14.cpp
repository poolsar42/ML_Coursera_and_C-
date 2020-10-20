#include <vector>
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
	int n, k;
	k = 1;
	cin >> n;
	map<int, vector<string>> traces;
	for (int i = 0; i < n; i ++){
		int p;
		cin >> p;
		vector<string> names = {};
		for (auto j = 0; j < p; ++j){
			string stop;
			cin >> stop;
			names.push_back(stop);
		}
		bool fl = 0;
		for (auto j: traces){
			if (j.second == names){
				fl = 1;
				cout << "Already exists for " << j.first << endl;
			}
		}
		if (fl == 0){
			cout << "New bus " << k << endl;
			traces[k] = names;
			k++;
		}
	}
	return 0;
}
