#include <iostream>
#include "rational.h"
#include <vector>
#include <typeinfo>
#include <clocale>

rational operator-(rational r1, rational r2) {
	return rational(r1.a * r2.b - r1.b * r2.a, r1.b * r2.b);
}

int main(void) {
	setlocale(LC_ALL, "rus");
	unsigned int n;
	int a, b;
	std::cout << "введите количество дробей";
	std::cin >> n;
	if (n < 2)
	{
		std::cout << "для демонстрации работы класса rational необходимо ввести как минимум два элемента";
		return 1;
	}
	std::vector<rational> arr;
	for (int i = 0; i < n ; i++)
	{
		std::cout << "введите числитель и знаменатель";
		std::cin >> a >> b;
		arr.push_back(rational(a, b));
	}
	for (size_t i = 0; i < n-1; i++)
	{
		arr[i].show(); std::cout << " + "; arr[i + 1].show(); std::cout << " = "; (arr[i] + arr[i + 1]).show();
		arr[i].show(); std::cout << " - "; arr[i + 1].show(); std::cout << " = "; (arr[i] - arr[i + 1]).show();
		arr[i].show(); std::cout << "++  = "; (++arr[i]).show(); arr[i + 1].show(); std::cout << "++ = "; (++arr[i + 1]).show();
		arr[i].show(); std::cout << " == "; arr[i + 1].show(); std::cout << " = " << (arr[i] == arr[i + 1]) << std::endl;
		arr[i].show(); std::cout << " > "; arr[i + 1].show(); std::cout << " = " << (arr[i] > arr[i + 1]);

	}
	return 0;
}