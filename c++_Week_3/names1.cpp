#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namesapce std;

class Person {
	public:
		void ChangeFirstName(int year, const string& first_name) {

		}
		void ChangeLastName(int year, const string& last_name) {
		
		}
		string GetFullName(int year) {

		}
	private:
};

int main(){
	Person person;

	person.ChangeFirstName(1965, "Polina");
	person.ChangeLastName(1967, "Sergeeva");
	for (int year: {1900, 1965, 1990}){
		cout << person.GetFullName(year) << endl;
	}
	
	person.ChangeFirstName(1970, "Appolinaria");
	for (int year: {1969, 1970}){
		cout << person.GetFullName(year) << endl;
	}

	person.ChangeLastName(1968, "Volkova");
	for (int year: {1969, 1970}){
		cout << person.GetFullName(year) << endl;
	}
	return 0;
}
