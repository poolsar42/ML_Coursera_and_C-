#include <iostream>
#include <vector>

using namespace std;

class Rout{
	public:
		string GetSource() { return source; }
		string GetDestination() {
			return destination;
		}
		int GetLength() { return length; }
		void SetSource(const string& new_source){
			source = new_source;
			UpdateLength();
		}
		void SetDectination(
				const string& new_destination){
			destination = new_destination;
			UpdateLength();
		}
	private:
		void UpdateLength(){
			length = ComputeDistance(source, destination);
		}
		string source;
		string destination;
		int length;
};


int main(){
	
	return 0;
}
