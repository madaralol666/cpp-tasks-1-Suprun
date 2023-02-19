#include <iostream>
#include "Line.h"

using namespace std;



void Line::Print() {
	cout << '(' << x1_ << ',' << x2_ << ')' << '(' << y1_ << ',' << y2_ << ')' << endl;
}

bool Line::Read(const char* txt)
{
	if (txt) cout << txt << endl;
	int x1, x2, y1, y2;

	cout << "X1: " && cin >> x1;
	cout << "Y1: " && cin >> y1;
	cout << "X2: " && cin >> x2;
	cout << "Y2: " && cin >> y2;

	SetX1(x1);
	SetY1(y1);
	SetX2(x2);
	SetY2(y2);
	return true;
}

void Line::Move(int delta_x1, int delta_y1, int delta_x2, int delta_y2)
{
	this->SetX1(this->x1_ + delta_x1);
	this->SetY1(this->y1_ + delta_y1);
	this->SetX2(this->x2_ + delta_x2);
	this->SetY2(this->y2_ + delta_y2);
}

double Line::Length()
{
	return sqrt(pow(static_cast<double>(x1_ - x2_), 2) + pow(static_cast<double>(y1_ - y2_), 2));
}

void Line::Center()
{
	int x, y;
	x = (x1_ + x2_) / 2;
	y = (y1_ + y2_) / 2;

	cout << "Center: " << '(' << x << ',' << y << ')' << endl;
}

void Line::CheckPoint(int x,int y)
{
	double result = (sqrt(pow(static_cast<double>(x1_ - x), 2) + pow(static_cast<double>(y1_ - y), 2))) 
		+ (sqrt(pow(static_cast<double>(x - x2_), 2) + pow(static_cast<double>(y - y2_), 2)));
	if (result == Length())
		cout << "Точка лежит на отрезке" << endl;
	else
		cout << "Точка не лежит на отрезке" << endl;;

}
