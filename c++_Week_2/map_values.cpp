set<string> BuildMapValuesSet(const map<int, string>& m){
	set<string> values;
	for(auto i: m){
		values.insert(i.second);
	}
	return values;
}
