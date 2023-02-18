#include <iostream>
#include <vector>
#include <string>
#include "Figure.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	vector<Figure> mas;
	float x1, x2, x3, x4, y1, y2, y3, y4;
	for (int i = 0; i < 3; i++)
	{
		cout << "¬ведите координаты x1,x2,x3,x4,y1,y2,y3,y4 дл€ четырехугольника є " << i + 1 << endl;
		cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> y4;
		mas.push_back(Figure(x1, x2, x3, x4, y1, y2, y3, y4));
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "ѕараметры четырехугольника є " << i + 1<<" : "; mas[i].show();  
		cout << "явл€етс€ ли пр€моугольником четырехугольник  є " << i + 1 << " : " << mas[i].is_prug() << endl;
		cout << "явл€етс€ ли квадратом четырехугольник  є " << i + 1 << " : " << mas[i].is_square() << endl;
		cout << "явл€етс€ ли ромбом четырехугольник  є " << i + 1 << " : " << mas[i].is_romb() << endl;
		cout << "ћожно ли вписать окружность в четырехугольник  є " << i + 1 << " : " << mas[i].is_in_circle() << endl;
		cout << "ћожно ли описать четырехугольник  є " << i + 1 << " : " << mas[i].is_out_circle() << endl;
	}
}
