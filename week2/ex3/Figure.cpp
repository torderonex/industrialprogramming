#include "Figure.h"
#include <cmath>
#include <iostream>
using namespace std;
Figure::Figure(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4) {
	this->x1 = x1; this->x2 = x2;this->x3 = x3; this->x4 = x4;this->y1 = y1;this->y2 = y2;this->y3 = y3; this->y4 = y4;
	this->S = 0.5 * abs((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1) + (x4 - x1) * (y2 - y1) + (x2 - x1) * (y4 - y1) - (x4 - x1) * (y3 - y1) - (x3 - x1) * (y4 - y1));
	this->P = (hypot(x1 - x2, y1 - y2) + hypot(x2 - x3, y2 - y3) + hypot(x3 - x4, y3 - y4) + hypot(x4 - x1, y4 - y1));
}
void Figure::show() {
	cout << "Периметр четырехугольника = " << P << endl;
	cout << "Площадь четырехугольника = " << S << endl;

}
bool Figure::is_prug() {
	return (hypot(x1 - x2, y1 - y2) == hypot(x3 - x4, y3 - y4)) && (hypot(x1 - x2, y1 - y2) == hypot(x4 - x1, y4 - y1)) && (hypot(x1 - x3, y1 - y3) == hypot(x4 - x2, y4 - y2));

}
bool Figure::is_square() {
	return is_prug() && (hypot(x1 - x2, y1 - y2) == hypot(x2 - x3, y2 - y3));
}
bool Figure::is_romb() {
	return  (hypot(x1 - x2, y1 - y2) == hypot(x3 - x4, y3 - y4)) && (hypot(x2 - x3, y2 - y3) == hypot(x4 - x1, y4 - y1));;

}
bool Figure::is_in_circle() {
	return (hypot(x1 - x2, y1 - y2) + hypot(x3 - x4, y3 - y4)) == (hypot(x1 - x2, y1 - y2) + hypot(x4 - x1, y4 - y1));
}
bool Figure::is_out_circle() {
	float cos1 = ((x2 - x1) * (x2 - x3) + (y2 - y1) * (y2 - y3)) / (hypot(x2 - x1, y2 - y1) * hypot(x3 - x2, y3 - y2));
	float cos2 = ((x4 - x1) * (x4 - x3) + (y4 - y1) * (y4 - y3)) / (hypot(x4 - x1, y4 - y1) * hypot(x4 - x3, y4 - y3));
	if ((acos(cos1) + acos(cos1)) - 3.14159 < 0.001)
	{
		return true;
	}
	return false;
}