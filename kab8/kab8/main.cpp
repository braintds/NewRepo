﻿#include "main.h"


void Color_print(Color color)
{
	cout << color.get_red() << ", " << color.get_green() << ", " << color.get_blue() << ", " << color.get_transparency() << endl;
}


//void LineSegment_print(LineSegment a)
//{
//	cout << "Point A: (" << a.get_PointA().x << ":" << a.get_PointA().y << ")" << endl;
//	cout << "Point B: (" << a.get_PointB().x << ":" << a.get_PointB().y << ")" << endl;
//	Color_print(a.get_color());
//}
//
//
//void Quadrilateral_print(Quadrilateral quad)
//{
//	cout << "===Quadrilateral===" << endl;
//
//	for (int i{ 0 }; i < quad.get_Vector_size(); i++) 
//	{
//		cout << endl << "LineSegment number: " << i << endl;
//		LineSegment_print(quad.get_LineSegment(i));
//	}
//
//	cout << "fill color" << endl;
//	Color_print(quad.get_color());
//}
//
//
//void Circumference_print(Circumference circumference)
//{
//	cout << "Centre: (" << circumference.get_x() << ":" << circumference.get_y() << endl;
//	cout << "Radius: " << circumference.get_radius() << endl;
//
//	Color_print(circumference.get_color());
//}
//
//
//void Circle_print(Circle circle)
//{
//	cout << endl << "===Circle===" << endl << endl;
//	cout << "Circumference" << endl;
//
//	Circumference_print(circle.get_circumference());
//
//	cout << "fill color" << endl;
//	Color_print(circle.get_color());
//}



void LineSegment_print(LineSegment s)
{
	;
}


void print(Circle a)
{
	cout<<a.get_square()<<endl;
	cout << a.get_perimeter() << endl;
	cout << a.get_red() << " " << a.get_green() << " " << a.get_blue() <<" "<<a.get_transparency() << endl;
	Color_print(a.get_color());
	Color_print(a.get_Color());
}


void Quadrilateral_print(Quadrilateral a)
{
	cout << "===Quadrilateral===" << endl;
	
	//a.get_blue();

}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Point a(1, 2), b(3, 4), c(1, -3), d(-2, 4), e(-3,-4);
	Color s(235, 235, 235, 265), s1(100,100,100,100);

	Circumference cir(c, s, 4);
	Circle circle(cir, s1);

	LineSegment aa(a, b, s), ab(b, c, s), ac(c, d, s), ad(d, a, s);
	vector <LineSegment> t{ aa,ab,ac,ad };
	Quadrilateral quad(t, s1);

	print(circle);
	//Quadrilateral_print(quad);
	//Circle_print(circle);

	return 0;
}