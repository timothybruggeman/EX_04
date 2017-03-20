//use pointers to find the smallest element in an array

#include <iostream>

using namespace std;

void main() {
	int myArray[8] = { 1,2,3,4,5,10,100,-22 };
	int smallestElement = 0;
	for (int i = 0; i < 8; i++) {
		if (myArray[i] < smallestElement)
			smallestElement = myArray[i];
	}
	cout << smallestElement;
}