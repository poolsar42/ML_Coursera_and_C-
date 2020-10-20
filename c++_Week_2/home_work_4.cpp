#include <iostream>

using namespace std;

void UpdateIfGreater(int x, int& y){
	if (x > y)
		y = x;
	else
		x = y;
}
/*
int main(){
	int x, y;
	x = 5;
	y = 6;
	UpdateIfGreater(x, y);
	cout << x << ' ' << y;
} */

