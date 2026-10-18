#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "raylib.h"
#include <cmath>
class Vector2
{
public:
	double x;
	double y;
public:
	Vector2();
	Vector2(double, double);
	~Vector2();
	Vector2 operator+(const Vector2& sum)const;
	Vector2 operator-(const Vector2& sub)const;
	Vector2 operator*(double mult)const;
	Vector2 operator/(double div)const;
	Vector2& operator+=(const Vector2& other);
	Vector2& operator-=(const Vector2& other);
	Vector2& operator*=(double other);
	double length()const;
	Vector2 Normalize()const;
	double Dot_Product(const Vector2& other)const;
};
