#include "Sea.h"
#include <utility>

Sea::Sea() : Ocean() {}
Sea::Sea(std::string n, float d, long long s, std::string oceanName_) : Ocean(std::move(n), d, s) {
    oceanName = std::move(oceanName_);
}

std::string Sea::getParentOceanName() { return oceanName; }
void Sea::setParentOceanName(std::string oceanParentName_) { oceanName = std::move(oceanParentName_); }

std::ostream& operator<<(std::ostream& stream, const Sea& sea) {
    std::cout << "Sea:" << std::endl;
    std::cout << "Name: " << sea.name << ";" << std::endl;

    std::cout << "Depth: " << sea.depth << ";" << std::endl;
    std::cout << "Square: " << sea.square << ";" << std::endl;

    std::cout << "It belongs to ocean:" << sea.oceanName << std::endl;
    return stream;
}
std::istream& operator>>(std::istream& stream, Sea& sea) {
    std::cout << "Sea:" << std::endl;

    std::cout << "Enter name: " << std::endl;
    std::cin >> sea.name;


     std::cout << "Enter depth: " <<  std::endl;
     std::cin >> sea.depth;

     std::cout << "Enter square: " <<  std::endl;
     std::cin >> sea.square;

    std::cout << "Enter it's ocean name: " << std::endl;
    std::cin >> sea.oceanName;
    return stream;
}