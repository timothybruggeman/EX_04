#ifndef _H_Rectangle2D
#define _H_Rectangle2D

class Rectangle2D {
private:
	double x, y, width, height;
public:
	const double getx() {
		return x;
	}
	const double setx(double x1) {
		x = x1;
	}
	const double gety() {
		return y;
	}
	const double sety(double y1) {
		y = y1;
	}
	const double getwidth() {
		return width;
	}
	const double setwidth(double width1) {
		width = width1;
	}
	const double getheight() {
		return height;
	}
	const double setheight(double height1) {
		height = height1;
	}
	Rectangle2D() {
		x = 0;
		y = 0;
		width = 1;
		height = 1;
	}
	Rectangle2D(double x1, double y1, double width1, double height1) {
		x = x1;
		y = y1;
		width = width1;
		height = height1;
	}
	const double getArea(double width, double height) {
		return (width * height);
	}
	const double getPerimeter(double width, double height) {
		return ((width + height) * 2);
	}
	const bool containsPoint(const Rectangle2D &r) {
		if (((r.x - r.width / 2) < 3) && ((r.x + r.width / 2) > 3) && ((r.y - r.height / 2) < 3) && ((r.y + r.height / 2) > 3)) {
			return true;
		}
		else return false;
	}
	const bool contains(const Rectangle2D&r1, const Rectangle2D&r2) {
		if (((r1.x - (r1.width / 2)) < (r2.x - (r2.width / 2))) && ((r1.x + (r1.width / 2)) > (r2.x + (r2.width / 2))) && ((r1.x - (r1.height / 2)) < (r2.x + (r2.height / 2))) && ((r1.x + (r1.height / 2)) > (r2.x - (r2.height / 2))))
			return true;
		else return false;
	}
	const bool overlaps(const Rectangle2D&r1, const Rectangle2D&r2) {
		if ((((r1.x - (r1.width / 2)) < (r2.x - (r2.width / 2))) || ((r1.x + (r1.width / 2)) > (r2.x + (r2.width / 2)))) && (((r1.x - (r1.height / 2)) < (r2.x + (r2.height / 2))) || ((r1.x + (r1.height / 2)) > (r2.x - (r2.height / 2)))))
			return true;
		else if (((((r1.x - (r1.width / 2)) < (r2.x - (r2.width / 2))) && ((r1.x + (r1.width / 2)) > (r2.x - (r2.width / 2)))) || ((r1.x + (r1.width / 2)) > (r2.x + (r2.width / 2)))) && (((r1.x - (r1.height / 2)) < (r2.x + (r2.height / 2))) && ((r1.x + (r1.height / 2)) < (r2.x - (r2.height / 2)))))
			return true;
		else if ((((r1.x - (r1.width / 2)) > (r2.x - (r2.width / 2))) && ((r1.x + (r1.width / 2)) < (r2.x + (r2.width / 2)))) && ((((r1.x - (r1.height / 2)) < (r2.x + (r2.height / 2))) && ((r1.x - (r1.height / 2)) > (r2.x - (r2.height / 2)))) || (((r1.x + (r1.height / 2)) > (r2.x - (r2.height / 2))) && ((r1.x + (r1.height / 2)) > (r2.x + (r2.height / 2))))))
			return true;
		else return false;
	}
};

#endif