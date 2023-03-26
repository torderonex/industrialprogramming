#pragma once
#include "Ocean.h"
#include "Sea.h"
#include <iostream>
#include <string>

using namespace std;
class Bay : public Sea {
protected:
    string seaName;
public:
    Bay();
    Bay(string n, float d, long long s, string parentOcean_ = "", string parentSea_ = "");

    string getParentSeaName();
    void setParentSeaName(string parentSeaName);

    friend ostream& operator<<(ostream& stream, const Bay& bay);
    friend istream& operator>>(istream& stream, Bay& bay);
};
