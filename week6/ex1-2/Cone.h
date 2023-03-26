#pragma once
#include <iostream>

class Cone{
protected:
	const float pi = 3.14159265f;
    double x,y,z;
    double radius;
    double height;
public:
    Cone();
    Cone(double r, double h);
    Cone(double r, double h, double x, double y, double z);
    void setCoordinate(double x, double y, double z);
    virtual void setRadius(double r);
    void setHeight(double h);
    double getRadius();
    double getHeight();
    virtual bool isEqual(Cone obj); 
    virtual double area();
    virtual double volume();
    friend std::ostream &operator<<(std::ostream &stream, Cone obj);
};