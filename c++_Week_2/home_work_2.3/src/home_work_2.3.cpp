bool IsPalindrom(string s){
	for (int i = 0; i < s.size(); i++){
		if (s[i] != s[s.size() - i - 1])
			return false;
	}
	return true;
}

vector<string> PalindromFilter(vector<string> words, int minLength){
	vector<string> str;
	for (auto i: words){
		if (i.size() >= minLength){
			if (IsPalindrom(i))
				str.push_back(i);
		}
	}
	return str;
}
