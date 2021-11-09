#include "Đircumference.h"


Đircumference::Đircumference(Point _centre, Color _col, float _rad)
	: centre{ _centre }, color{ _col }, rad{ _rad }
{
}


float Đircumference::get_x()
{
	return this->centre.x;
}


float  Đircumference::get_y()
{
	return this->centre.y;
}


float Đircumference::get_rad()
{
	return this->rad;
}


void Đircumference::set_color()
{
	color.change_param();
}


Color Đircumference::get_color()
{
	return color;
}