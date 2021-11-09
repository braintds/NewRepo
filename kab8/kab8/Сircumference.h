#pragma once
#include "Header.h"
#include "Color.h"
#include"Point.h"


class Đircumference
{
private:
	Point centre;
	Color color;
	float rad;
public:
	Đircumference(Point, Color, float);
	float get_x();
	float get_y();
	float get_rad();
	void set_color();
	Color get_color();

};