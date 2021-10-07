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
	void set_color();
	double get_x();
	double get_y();
	double get_rad();
	double get_square();
	double get_perimeter();
	void print();

};