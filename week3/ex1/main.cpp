#include <iostream>
#include "eq2.h"
using namespace std;

int main(void) {
    setlocale(LC_ALL, "Russian");

    double a, b, c;
    cin >> a >> b >> c;
    eq2 exmpl = eq2(a, b, c);
    exmpl.find_X();
    cout << exmpl.find_Y(6);
    return 0;
}