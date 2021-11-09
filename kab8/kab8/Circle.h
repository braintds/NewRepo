#pragma once
#include "Header.h"
#include "�ircumference.h"


class Circle
{
private:
	�ircumference circle;
	Color color;
public:
	Circle(�ircumference, Color);
	�ircumference get_circumference();
	Color get_color();
	float get_x();
	float get_y();
	float get_rad();
	float get_square();
	float get_perimeter();
};