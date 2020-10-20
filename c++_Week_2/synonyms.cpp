#include <set>
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
	map<string, set<string>> synonyms;
	int n;
	cin >> n;
	string s;
	for (int i = 0; i < n; ++i){
		cin >> s;
		if (s == "ADD"){
			string word1, word2;
			cin >> word1 >> word2;
			synonyms[word1].insert(word2);
			synonyms[word2].insert(word1);
			
		}
		if (s == "COUNT"){
			string word;
			cin >> word;
			cout << synonyms[word].size() << endl;
		}
		if (s == "CHECK"){
			string word1, word2;
			cin >> word1 >> word2;
			if (synonyms[word1].size() == 0){
				cout << "NO" << endl;
				continue;
			}
			bool k = 0;
			for(auto i: synonyms[word1]){
				if (i == word2){
					k = 1;
				}	
			}
			if (k == 1){
				cout << "YES" << endl;
				continue;
			}
			cout << "NO" << endl;
		}
	}
	return 0;
}
