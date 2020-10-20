#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <chrono>

using namespace std;
using namespace std::chrono;
//3
struct Person{
  string name;
  string sirname;
  int age;
};

void Swap(int& x, int& y){
  int tmp = x;
  x = y;
  y = tmp;
}

void Sort (vector<int>& v){
  sort(begin(v), end(v));
}

vector<Person> GetMoscowPopulation(){
  vector<Person> g;
  return g;
}

void PrintPopulationSize(const vector<Person>& p){
  cout << "There are " << p.size() <<
	  " people in Moscow" << endl;
}

int main(){
//1
  int x, y;
  cin >> x >> y;
  Swap(x, y);
  cout << x <<" " << y << endl;
//2
  vector<int> nums = {1, 3, 9, 6, 10, 11};
  sort(begin(nums), end(nums));
  for (auto i: nums){
    cout << i << " ";
  }
  cout <<"\n";
  vector<int> numbs = {5, 10, 7, 6, 4, 3};
  Sort(numbs);
  for (auto i: numbs){
    cout << i << " " << endl;
  }

  auto start = steady_clock::now();
  vector<Person> people = GetMoscowPopulation();
  auto finish = steady_clock::now();
  cout << "GetMoscowPopulation"
	  << duration_cast<milliseconds>(finish - start).count()
	  << "ms" << endl;

  start = steady_clock::now();
  PrintPopulationSize(GetMoscowPopulation());
  finish = steady_clock::now();
  cout << "PrintPopulationSize"
	  << duration_cast<milliseconds>(finish - start).count()
	  << "ms" << endl;
}
