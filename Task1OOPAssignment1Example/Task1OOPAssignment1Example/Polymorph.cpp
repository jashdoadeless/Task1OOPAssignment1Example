#include "stdafx.h"
#include "Polymorph.h"

Polymorph::Polymorph()
{
}

Polymorph::~Polymorph()
{
}

double Polymorph::calc_Perimeter(double side_1, double side_2, double side_3, double side_4)
{
	return side_1 + side_2 + side_3 + side_4;
}

double Polymorph::calc_Perimeter(double side)
{
	return side * 4;
}

double Polymorph::calc_Perimeter(double radius, double pi)
{
	return pi * 2 * radius;
}

void Polymorph::Coercion_Breaks_This()
{
	double pi = 3.14159;
	int radius = 5.4f;
	double circumference = 2 * pi*radius;
	cout << "The perimeter is " << circumference << endl;
}


