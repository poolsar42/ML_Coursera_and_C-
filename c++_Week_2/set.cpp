#include <set>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main(){
	set<string> s;
	s.insert("x");
	s.insert("y");
	s.insert("p");
	s.erase("p");
	cout << s.count("x");
	vector<string> str = {"hi", "man", "hi"};
	set<string> h (begin(str), end(str));

}
