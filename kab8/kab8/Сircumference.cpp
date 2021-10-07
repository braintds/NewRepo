#include "�ircumference.h"


�ircumference::�ircumference(Point _centre, Color _col, double _rad)
	: centre{ _centre }, color{ _col }, rad{ _rad }
{
}


double �ircumference::get_x()
{
	return this->centre.x;
}


double  �ircumference::get_y()
{
	return this->centre.y;
}


double �ircumference::get_rad()
{
	return this->rad;
}

void �ircumference::set_color()
{
	color.change_param();
}

Color �ircumference::get_color()
{
	return color;
}


void �ircumference::print()
{
	cout << "����� x = " << this->centre.x << ",y = " << this->centre.y << ", ������ = " << rad << endl;
	color.print();

}