/*#include <iostream>
#include <vector>
#include <string>

using namespace std;
*/
void MoveStrings(vector<string>& source, vector<string>& destination){
	for (auto i: source){
		destination.push_back(i);
	}
	source.clear();
}
/*
int main(){
	vector<string> s = {"birds", "movie"};
	vector<string> d = {"horses", "moon"};
	MoveStrings(s, d);
	for (auto i: s){
		cout << i << ' ' ;
	}
	cout << endl;
	for (auto j: d){
		cout << j << ' ' ;
	}
	cout << endl;
}*/
