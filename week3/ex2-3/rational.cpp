#include "rational.h"
#include <iostream>

struct RationalValues {
	int a;
	int b;
};

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}

RationalValues formating(int a, int b) {
	if (b == 0)
	{
		std::cout << "знаменатель не должен быть равен нулю";
		throw std::runtime_error("zero division error");
	}

	while (abs(gcd(a, b)) != 1)
	{
		int tempA = a;
		a = a / gcd(a, b);
		b = b / gcd(tempA, b);
	}
	
	if (a > b) {a = a / b;}
	RationalValues res = { a,b };
	return res;
}
 
rational rational::operator+(rational& other) {
	return rational(a * other.b + b * other.a, b * other.b);
}

rational rational::operator++() {
	return rational(++a, b);
}

bool rational::operator==(rational& other) {
	return (a == other.a) && (b == other.b);
}

bool rational::operator>(rational& other) {
	return (a * other.b) > (other.a * b);
}

rational& rational::operator=(rational& other) {
	a = other.a; b = other.b;
	return *this;
}


rational::rational(int a1, int b1) {
	RationalValues res = formating(a1, b1);
	this->a = res.a; this->b = res.b;
}
void rational::set(int a1, int b1) {
	RationalValues res = formating(a1, b1);
	this->a = res.a; this->b = res.b;
}
void rational::show() {
	std::cout << this->a << "/" << this->b << std::endl;
}