#pragma once
#include <iostream>
#include <string>

class Ocean {
protected:
    std::string name;
    float depth;
    long long square;

public:
    Ocean();
    Ocean(std::string n, float d, long long s);

    std::string getName();
    float getDepth();
    long long getSquare();

    void setName(std::string n);
    void setDepth(float d);
    void setSquare(long long s);

    friend std::ostream& operator<<(std::ostream& stream, const Ocean& ocean);
    friend std::istream& operator>>(std::istream& stream, Ocean& ocean);
};
