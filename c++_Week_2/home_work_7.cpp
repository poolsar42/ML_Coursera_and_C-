vector<int> Reversed(const vector<int>& v){
	vector <int> d = v;
	int n = v.size();
	int tmp;
	for (int i = 0; i < n/2; i ++){
		tmp = d[n-i-1];
		d[n-i-1] = d[i];
		d[i] = tmp;
	}
	return d;
}
