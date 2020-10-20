/*#include <iostream>
#include <vector>

using namespace std;
*/
void Reverse(vector<int>& v){
	int n = v.size();
	int tmp;
	for (int i = 0; i < (n+1)/2; i ++){
		tmp = v[i];
		v[i] = v[n-i-1];
		v[n-i-1] = tmp;
	}
}
/*
int main(){
	vector<int> num = {0, 1, 5, 3, 4, 2, 6, 7};
	Reverse(num);
	for (auto i: num){
		cout << i << " " ;
	}
	cout << endl;
}*/
