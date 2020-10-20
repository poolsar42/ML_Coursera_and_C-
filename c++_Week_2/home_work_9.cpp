#include <iostream>
#include <vector>
#include <string>

using namespace std;

void PrintQueue(const vector<int>& v){
	for(auto i: v){
		cout << i << ' ';
	}
	cout << endl;
}

void WORRY_COUNT(const vector<int>& v){
	int sum = 0;
	for (auto i: v){
		sum += i;
	}
	cout << sum << endl;
}

int main(){
	int n;
	cin >> n;
	string s;
	vector<int> queue;

	for (int i = 0; i < n; i ++){
		cin >> s;
		if (s == "WORRY_COUNT"){
			WORRY_COUNT(queue);
			continue;
		}
		if (s == "WORRY"){
			int j;
			cin >> j;
			queue[j] = 1;
		}
		if (s == "QUIET"){
			int j;
			cin >> j;
			queue[j] = 0;
		}
		if (s == "COME"){
			int k;
			int size = queue.size();
			cin >> k;
			queue.resize(size + k);
		}
	}

	return 0;
}
