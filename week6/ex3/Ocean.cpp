#include "Ocean.h"


Ocean::Ocean() {}
Ocean::Ocean(std::string n, float d, long long s) {
    name = std::move(n);
    depth = d;
    square = s;
    
}

std::string Ocean::getName() { return this->name; }
float Ocean::getDepth() { return this->depth; }
long long Ocean::getSquare() { return this->square; }

void Ocean::setName(std::string n) { name = std::move(n); }
void Ocean::setDepth(float d) {depth = d; }
void Ocean::setSquare(long long s){square = s;}

std::ostream& operator<<(std::ostream& stream, const Ocean& ocean) {
    std::cout << "Ocean:" << std::endl;
    std::cout << "Name: " << ocean.name << ";" << std::endl;

    std::cout << "Depth: " << ocean.depth << ";" << std::endl;
    std::cout << "Square: " << ocean.square << ";" << std::endl;

    return stream;
}
std::istream& operator>>(std::istream& stream, Ocean& ocean) {
    std::cout << "Ocean:" << std::endl;

   std:: cout << "Enter name: " << std::endl;
    std::cin >> ocean.name;

    std::cout << "Enter depth: " << std::endl;
    std::cin >> ocean.depth;

    std::cout << "Enter square: " << std::endl;
    std::cin >> ocean.square;

    return stream;
}