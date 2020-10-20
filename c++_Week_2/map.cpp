#include <iostream>
#include <map>
#include <vector>

using namespace std;

void PrintMap(const map<string, int>& m){
	cout << "Size: " << m.size() << endl;
	for (const auto& item: m){
		cout << item.first << ": " << item.second << endl;
	}
}

map<string, int> BuildReversedMap(const map<int, string>& m){
	map<string, int> result;
	for (auto i: m){
		result[i.second] = i.first;
	}
	return result;
}


int main() {
/*	map<int, string> events;
	events[1970] = "UNIX epoch start";
	events[1950] = "Bjarne Stroustrup's birth";
	events[1941] = "Dennis Ritchie's birth";
	PrintMap(events);

	cout << events[1950] << endl;

	events.erase(1970);
	PrintMap(events);

	map<string, int> events_rev = BuildReversedMap(events);
	*/
	map<string, int> m = {{"one", 1}, {"two", 2}, {"one", 3}};
	PrintMap(m);
	m.erase("one");
	PrintMap(m);
	
	vector<string> words = {"one", "two", "three"};
	map<string, int> counters;
	for (const string& word: words){
		++counters[word];
	}
	PrintMap(counters);

	m.erase("four");
	m["two"] = 2;
	m["three"] = 3;
	m["five" ] = 1;
	cout << m.size();
	return 0;
}
