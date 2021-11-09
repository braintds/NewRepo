#include "Circumference.h"


�ircumference::�ircumference(Point _centre, Color _col, float _rad)
	: centre{ _centre }, color{ _col }, rad{ _rad }
{
}


float �ircumference::get_x()
{
	return this->centre.x;
}


float  �ircumference::get_y()
{
	return this->centre.y;
}


float �ircumference::get_rad()
{
	return this->rad;
}

void Circumference::set_color()
{
	color.change_param();
}

Color Circumference::get_color()
{
	return color;
}