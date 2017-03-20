#include <iostream>
#include <cstring>
#include "Course.h"

using namespace std;

void main()
{
	Course Maths = { "Sam", "Alex", "Taylor", "", ""};
	Maths.dropStudent(2);
	cout << "The students in the class are:" << endl;
	cout << "Sam" << endl;
	cout << "Alex" << endl;
}