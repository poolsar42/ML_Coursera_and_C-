#include <iostream>
#include <vector>

using namespace std;

struct Lecture{
	string title;
	int duration;
	string author;
};

struct DetailedLecture{
	Lecture title;
	string specialization;
};

void PrintLecture(const Lecture& lecture){
	cout <<
		"Title: " << lecture.title << endl <<
		"Duration: " << lecture.duration << endl <<
		"Author: " << lecture.author << endl;
}

void PrintCourse(
		const vector<Lecture>& lectures){
	for (const Lecture& lecture: lectures){
		PrintLecture(lecture);
	}
}

int main(){
	Lecture lecture1;
	lecture1.title = "OOP";
	lecture1.duration = 5400;
	lecture1.author = "Anton";
	
	Lecture lecture2 = {"C++", 4600, "Oleg"};
	DetailedLecture lecture_2 = {lecture2, "C++"};
	return 0;
}
