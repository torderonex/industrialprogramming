#include "Circle.h"
#include <cmath>
using namespace std;

Circle::Circle(float r, float x, float y) {
	radius = r;
	x_center = x;
	y_center = y;
}

void Circle::set_circle(float r, float x, float y) {
	x_center = x;
	y_center = y;
	radius = r;
}

float Circle::square() {
	return  3.14159 * radius * radius;
}

bool Circle::triangle_around(float a, float b, float c) {
	float p_triangle = (a + b + c) / 2;
	float square_trinagle = sqrt(p_triangle * (p_triangle - a) * (p_triangle - b) * (p_triangle - c));
	return radius == a * b * c / 4 / square_trinagle;
}

bool Circle::triangle_in(float a, float b, float c) {
	float p_triangle = (a + b + c) / 2;
	float square_trinagle = sqrt(p_triangle * (p_triangle - a) * (p_triangle - b) * (p_triangle - c));
	return radius == 2 * square_trinagle / (a + b + c);
}

bool Circle::check_circle(float r, float x_cntr, float y_cntr) {
	double len_between_centers = sqrt(pow((x_center - x_cntr), 2) + pow((y_center - y_cntr), 2));
	return len_between_centers <= (r + radius);
}