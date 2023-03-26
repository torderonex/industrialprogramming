#include "Cone.h"
#include <cmath>
Cone::Cone(){radius=height=x=y=z=0.0;}

Cone::Cone(double r, double h){radius = r; height = h; x=y=z=0.0;}

Cone::Cone(double r, double h, double x, double y, double z){
    radius = r; height = h; this->x = x; this->y = y; this->z = z;
}

void Cone::setCoordinate(double x, double y, double z){this->x = x; this->y = y; this->z = z;}

void Cone::setHeight(double h){height = h;}

void Cone::setRadius(double r){radius = r;}

double Cone::getHeight(){return height;}

double Cone::getRadius(){return radius;}

double Cone::area(){
    double l = sqrt(height * height + radius * radius);
    return pi * radius * (radius + l);
}

double Cone::volume(){return pi * radius * radius * height /3;}

bool Cone::isEqual(Cone obj){
    if (this->radius != obj.radius){return false;}
    if (this->height != obj.height){return false;}
    return true;
}

std::ostream &operator<<(std::ostream &stream, Cone obj){ 
    stream << "(" << obj.x << "; ";
    stream << obj.y << "; ";
    stream << obj.z << ") ";
    stream << "r=" << obj.radius << " ";
    stream << "h=" << obj.height << "\n";
    return stream;
}