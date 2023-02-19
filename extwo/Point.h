#pragma once
class Point
{
private:
	int x_ = 0;
	int y_ = 0;
public:
	int GetX()
	{
		return x_;
	}
	int GetY();
	void SetX(int);
	void SetY(int);
	void Print();
	bool Read(const char* txt = 0);
	void Move(int delta_x, int delta_y);
	double Dist(const Point&);
	friend double fdist(const Point&, const Point&);
};
inline int Point::GetY()
{
	return y_;
}

inline void Point::SetX(int x)
{
	x_ = x;
}

inline void Point::SetY(int y)
{
	y_ = y;
}
