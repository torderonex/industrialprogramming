#pragma once
#include "Cone.h"
#include <iostream>
class TruncatedCone : public Cone
{
private:
    double smallRadius;
public:
    TruncatedCone();
    TruncatedCone(double rBig, double rSmall,double h);
    TruncatedCone(double rBig, double rSmall,double h, double x, double y, double z);
    void setRadius(double rBig, double rSmall);
    double area();
    double volume();
    bool isEqual(TruncatedCone obj); 
    friend std::ostream &operator<<(std::ostream &stream, TruncatedCone obj);
    friend std::istream &operator>>(std::istream &istream, TruncatedCone &obj);
};


