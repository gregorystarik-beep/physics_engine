#include "Vector2.h"
#include <cmath>
Vector2::Vector2()
{
	x = 0;
	y = 0;
}
Vector2::Vector2(double x, double y):x(x),y(y){}
Vector2::~Vector2(){}
Vector2 Vector2::operator+(const Vector2& sum)const
{
	return Vector2(x + sum.x, y + sum.y);
}
Vector2 Vector2::operator-(const Vector2& sub)const
{
	return Vector2(x - sub.x, y - sub.y);
}
Vector2 Vector2::operator*(double mult)const
{
	return Vector2(mult * x, mult * y);
}
Vector2 Vector2::operator/(double div)const
{
	if (div == 0)return Vector2(0, 0);
	return Vector2(x / div, y / div);
}
