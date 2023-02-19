#pragma once
#include <string>
using namespace std;
class Pixel {
private:
    int x_ = 0;
    int y_ = 0;
    string colorpoint_;
public:
    int GetX()
    {
        return x_;
    }
    int GetY();
    string GetColor();

    void SetX(int);
    void SetY(int);
    void SetColor(string);

    void Print();
    bool Read(const char* txt);
    void Move(int, int);
    double Dist(const Pixel&);
    void Draw();
    void Erase();
};
inline int Pixel::GetY() {
    return y_;
}
inline string Pixel::GetColor() {
    return colorpoint_;
}

inline void Pixel::SetX(int x)
{
    x_ = x;
}

inline void Pixel::SetY(int y)
{
    y_ = y;
}

inline void Pixel::SetColor(string colorpoint)
{
    colorpoint_ = colorpoint;
}

