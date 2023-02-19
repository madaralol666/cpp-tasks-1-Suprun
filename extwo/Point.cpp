#include <iostream>
#include <cmath>
#include "Point.h"
using namespace std;

void Point::Print()
{
	cout << '(' << x_ << ',' << y_ << ')';
}

bool Point::Read(const char* txt)
{
	if (txt) cout << txt;
	int x, y; char c;
	if (cin >> c && c == '(' &&
		cin >> x &&
		cin >> c && c == ',' &&
		cin >> y &&
		cin >> c && c == ')'
		)
	{
		SetX(x); SetY(y);
		return true;
	}
	if (!cin) cin.clear();
	while (cin.get() != '\n');
	return false;
}

void Point::Move(int dx, int dy)
{
	this->SetX(this->x_ + dx);
	this->SetY(this->y_ + dy);
}
double Point::Dist(const Point& other)
{
	return sqrt(pow(static_cast<double>(x_ - other.x_), 2) + pow(static_cast<double>(y_ - other.y_), 2)
	);
}

double fdist(const Point& a, const Point& b)
{
	return sqrt(pow(static_cast<double>(a.x_ - b.x_), 2)
		+ pow(static_cast<double>(a.y_ - b.y_), 2)
	);
}