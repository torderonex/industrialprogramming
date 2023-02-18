#include <iostream>
#include "Circle.h"
using namespace std;


int main(void) {

    Circle mas[3];
    float r, x, y;
    for (int i = 0; i < 3; i++)
    {
        cout << "Введите радиус, x и y центра для окружности № " << i + 1 << " через пробел: " << endl;
        cin >> r >> x >> y;
        mas[i].set_circle(r, x, y);
    }
    float a, b, c;
    for (int i = 0; i < 3; i++)
    {
        cout << "Площадь окружность № " << i + 1 << endl;
        cout << mas[i].square();
        cout << "Введите a, b и c для треугольника который нужно проверить на возможность быть описанным окуржностью № " << i + 1 << " через пробел: " << endl;
        cin >> a >> b >> c;
        cout << mas[i].triangle_in(a, b, c);
        cout << "Введите a, b и c для треугольника в который нужно вписать окружность № " << i + 1 << " через пробел: " << endl;
        cin >> a >> b >> c;
        cout << mas[i].triangle_around(a, b, c);
        cout << "Введите радиус и координаты центра для окружности, которую нужно проверить на условие касания";
        cout << mas[i].check_circle(a, b, c);
    }
    return 0;
    
}