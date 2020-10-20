#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main (){
	int n;
	cin >> n;
	string s;
	map<string, vector<string>> buses;
	map<string, vector<string>> stops;
	for (int i = 0; i < n; ++i){
		cin >> s;
		if (s == "NEW_BUS"){
			string bus;
			cin >> bus;
			int k;
			cin >> k;
			for (int j = 0; j < k; ++j){
				string bus_stop;
				cin >> bus_stop;
				buses[bus].push_back(bus_stop);
				stops[bus_stop].push_back(bus);
			}
		}
		if (s == "STOPS_FOR_BUS"){
			string bus;
			cin >> bus;
			if(buses[bus].empty()){
				cout << "No bus" << endl;
				continue;
			}
			for (auto il: buses[bus]){
				cout << "Stop " << il << ": ";
				if (stops[il].size() == 1){
					cout << "no interchange" << endl;
					continue;
				}
				for (auto j: stops[il]){
					if (j != bus)
						cout << j << " ";
				}
				cout << endl;
			}
		}
		if (s == "BUSES_FOR_STOP"){
			string stop;
			cin >> stop;
			if(stops[stop].empty()){
				cout << "No stop" << endl;
				continue;
			}
			for(auto il: stops[stop])
				cout << il << ' ';
			cout << endl;
		}
		if (s == "ALL_BUSES"){
			if(buses.empty()){
				cout << "No buses" << endl;
				continue;
			}
			bool k = 0;
			for (auto j: buses){
				if (!j.second.empty())
					k = 1;
			}
			if (k == 0){
				cout << "No buses" << endl;
				continue;
			}
			for(auto j: buses){
				if (!j.second.empty()){
					cout << "Bus " << j.first << ": ";
					for (auto il: j.second)
						cout << il << " ";
					cout << endl;
				}
			}
		}
	}
	return 0;
}
