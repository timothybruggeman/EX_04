#include <iostream>
#include "Rectangle2D.h"

using namespace std;

void main() {
	Rectangle2D r1 = { 2,2,5.5,4.9 }, r2 = { 4,5,10.5,3.2 }, r3 = { 3,5,2.3,5.4 };
	r1.getArea(r1.getwidth(), r1.getheight());
	r1.getPerimeter(r1.getwidth(), r1.getheight());
	r1.containsPoint(r1);
	r1.contains(r1, r2);
	r1.overlaps(r1, r2);
}