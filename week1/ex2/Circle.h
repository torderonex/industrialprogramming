#pragma once
class Circle
{
private:
	float radius, x_center, y_center;
public:
	Circle();
	Circle(float r, float x, float y);
	void set_circle(float r, float x, float y);
	float square();
	bool triangle_around(float a, float b, float c);
	bool triangle_in(float a, float b, float c);
	bool check_circle(float r, float x_cntr, float y_cntr);

};
