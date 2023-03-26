#pragma once

#include "Ocean.h"
#include <iostream>
#include <string>

class Sea : public Ocean {
protected:
    std::string oceanName;
public:
    Sea();
    Sea(std::string n, float d, long long s, std::string oceanName_ = "");

    std::string getParentOceanName();
    void setParentOceanName(std::string oceanParentName_);

    friend std::ostream& operator<<(std::ostream& stream, const Sea& sea);
    friend std::istream& operator>>(std::istream& stream, Sea& sea);
};