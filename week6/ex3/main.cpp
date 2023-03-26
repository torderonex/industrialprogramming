#include <iostream>
#include "Ocean.h"
#include "Sea.h"
#include "Bay.h"

using namespace std;

int main(){
    Ocean oc = Ocean("Indian", 7729 , 76174000);
    cout << oc << endl;
	Sea s1 = Sea("Red", 2211,  438000,  "Indian");
	Sea s2 = Sea();
	s2.setName("Black");
	s2.setDepth(2210);
	s2.setSquare(422000);
    cout << s2 << endl;
	Bay b1 = Bay("Finland",  38, 420000, "", "Baltic");
	Bay b2 = Bay();
	cin >> b2;
	cout << endl << b2;
}