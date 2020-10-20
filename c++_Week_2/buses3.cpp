#include <iostream>
#include <map>
#include <set>
#include <vector>

#include <string>

using namespace std;

int main(){
	int n, m;
	int k = 1;
	string stop;
	cin >> n;
	map<set<string>, int> stops;
	for (int i = 0; i < n; ++i){
		cin >> m;
		set<string> cur_stops;
		for (int j = 0; j < m; ++j){
			cin >> stop;	
			cur_stops.insert(stop);
		}
		if (stops[cur_stops] == 0){
			stops[cur_stops] = k;
			cout << "New bus " << k << endl;
			k++;
		}
		else{
			cout<<"Already exists for " << stops[cur_stops] << endl;
		}
	}
	return 0;
}
