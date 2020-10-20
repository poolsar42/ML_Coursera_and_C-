#include <iostream>

using namespace std;

void PrintInt(){
	int x;
	cout << x << endl;
}

void PrintDouble(){
	double p = 3.14;
	cout << p << endl;
}

void PrintParity(int x){
	string parity = (x % 2 == 0) ? "even": "odd" ;
	cout << x << " is " << parity << endl;

}

string GetPositivity(int x){
	if (x > 0)
		return "positive";
	else if(x < 0)
		return "negative";
	else 
		return "zero";
}

void PrintPositivity(int x){
	string s = GetPositivity(x);
	cout << s << endl;
}

int main(){
	//1
	int x = 0;
	{
		int x = 5;
		{
			cout << x << endl;
		}
		cout << x << endl;
	}
	cout << x << endl;
	//2
	PrintInt();
	PrintDouble();
	PrintInt();
	
	PrintParity(5);
	PrintPositivity(-2);
	PrintPositivity(0);
	PrintPositivity(5);
	return 0;
}
