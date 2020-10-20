#include <vector>
#include <iostream>

using namespace std;

int mean(const vector<int>& v){
	int n = v.size();
	int sum = 0;
	for (auto j: v)
		sum += j;
	return sum / n;
}

void PrintVector(const vector<int>& v){
	for(auto i: v){
		cout << i << ' ';
	}
	cout << endl;
}

int main(){
	int n;
	cin >> n;
	vector<int> T(n);
	for (int& i: T){
		cin >> i;
	}
	int m = mean(T);
	vector<int> high_T_indexes;
	for (int i = 0; i < n; ++i){
		if(T[i] > m)
		       high_T_indexes.push_back(i);	
	}
	cout << high_T_indexes.size() << endl;
	PrintVector(high_T_indexes);
	return 0;
}
