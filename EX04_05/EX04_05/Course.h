#ifndef _COURSE_H_
#define _COURSE_H_

#include <iostream>
#include <cstring>
using namespace std;

class Course {
private:
	string student[5];
public:
	string getstudent(int number) {
		return student[number];
	}
	Course(string a, string s, string d, string f, string g) {
		student[0] = a;
		student[1] = s;
		student[2] = d;
		student[3] = f;
		student[4] = g;
	}
	string* increaseArray() {
		string biggerArray[6];
		for (int i = 0; i < 5; i++)
			biggerArray[i] = getstudent(i);
	}
	void dropStudent(int number) {
		student[number] = "";
	}
	void clear(int all) {
		for (int i = 0; i < all; i++) {
			student[i] = "";
		}
	}
};


#endif
