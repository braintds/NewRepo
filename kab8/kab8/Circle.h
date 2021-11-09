#pragma once
#include "Header.h"
#include "Đircumference.h"


class Circle
{
private:
	Đircumference circle;
	Color color;
public:
	Circle(Đircumference, Color);
	Đircumference get_circumference();
	Color get_color();
	float get_x();
	float get_y();
	float get_rad();
	float get_square();
	float get_perimeter();
};