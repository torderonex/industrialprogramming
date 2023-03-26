#include <iostream>
#include "Cone.h"
#include "TruncatedCone.h"


int main(void){
    //ex1
    Cone c1(3, 7);             
    Cone c2(1, 2, 3, 5, 10);    
 
    std::cout << "Cone 1: " << c1;
    std::cout << "Area: " << c1.area() << "\n";
    std::cout << "Volume: " << c1.volume() << "\n";
 
    std::cout << "Cone 2: " << c2;
    std::cout << "Area: " << c2.area() << "\n";
    std::cout << "Volume: " << c2.volume() << "\n";
    //ex2

    TruncatedCone tcone;
    std::cin >> tcone;
    std::cout << tcone;
    TruncatedCone tcone2{5,2,5,0,0,0};
    std::cout << "1st truncated cone: " << tcone << "2nd: " << tcone2;
    std::cout << "Area of second truncated cone: " << tcone2.area() << std::endl ;
    std::cout << "Volume of second truncated cone: " << tcone2.volume() << std::endl;
    std::cout << tcone.isEqual(tcone2);
}