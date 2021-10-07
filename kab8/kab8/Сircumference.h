#pragma once
#include "Header.h"
#include "Color.h"
#include"Point.h"


class �ircumference
{
private:
	Point centre;
	Color color;
	double rad;
public:
	�ircumference(Point, Color, double);
	double get_x();
	double get_y();
	double get_rad();
	void set_color();
	Color get_color();
	void print();
};