#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

void Print(const vector<long long>& v){
	for(const auto& i: v){
		cout << i << ' ';
	}
	cout << endl;
}

int main(){
	int n;
	long long a;
	cin >> n;
	vector <long long> nums(n);
	for(int i = 0; i < n; ++i){
		cin >> a;
		nums[i] = a;
	}
	sort(nums.begin(), nums.end(), [](int x, int y){
		return abs(x) < abs(y);
	});
	Print(nums);
}
