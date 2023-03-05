#pragma once
class rational
{
private:
	int a, b;
public:
	rational(int a1, int b1);
	void set(int a1, int b1);
	void show();
	rational operator+(rational& other);
	rational operator++();
	bool operator==(rational& other);
	bool operator>(rational& other);
	rational& operator=(rational& other);
	friend rational operator-(rational r1, rational r2);

	
};

