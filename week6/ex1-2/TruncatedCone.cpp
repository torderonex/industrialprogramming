#include "TruncatedCone.h"
#include <iostream>
#include <cmath>
TruncatedCone::TruncatedCone(){radius = smallRadius = height = x = y = z = 0.0f;}

TruncatedCone::TruncatedCone(double rBig, double rSmall, double h){x=y=z=0.0f; radius = rBig; smallRadius = rSmall; height = h;}

TruncatedCone::TruncatedCone(double rBig, double rSmall,double h, double x, double y, double z){
    this->x = x; this->y = y; this->z = z; 
    radius = rBig; smallRadius = rSmall; height = h;
}

void TruncatedCone::setRadius(double rBig, double rSmall){
    radius = rBig; smallRadius = rSmall;
}

double TruncatedCone::area(){
    double l = sqrt(height * height + (radius - smallRadius) * (radius - smallRadius));
    return pi * l * (radius + smallRadius) + pi * radius * radius + pi * smallRadius * smallRadius;
}

double TruncatedCone::volume(){
    return pi * height / 3 * (radius * radius + radius * smallRadius + smallRadius * smallRadius);
}

bool TruncatedCone::isEqual(TruncatedCone obj){
    return (this->smallRadius == obj.smallRadius) && (this->Cone::isEqual(obj));
}

std::ostream& operator<<(std::ostream& stream, TruncatedCone obj){
  stream << "(" << obj.x << "; ";
    stream << obj.y << "; ";
    stream << obj.z << ") ";
    stream << "R=" << obj.radius << " ";
    stream << "r=" << obj.smallRadius << " ";
    stream << "h=" << obj.height << "\n";
    return stream;
}

std::istream &operator>>(std::istream &istream, TruncatedCone &obj){
  std::cout << "coordinates: "; 
  std::cin >> obj.x >> obj.y >> obj.z;
  float rB,rS;
  std::cout << "radiuses: ";
  std::cin >> rB >> rS;
  obj.radius = std::max(rB,rS);
  obj.smallRadius = std::min(rB,rS);
  std::cout << "height: ";
  std::cin >> obj.height;
  return istream;
}
