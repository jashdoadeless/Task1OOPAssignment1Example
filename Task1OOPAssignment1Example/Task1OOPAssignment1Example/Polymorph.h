#pragma once
class Polymorph
{
public:
	Polymorph();
	~Polymorph();
	double calc_Perimeter(double side_1, double side_2, double side_3, double side_4);
	double calc_Perimeter(double side);
	double calc_Perimeter(double radius, double pi);
	void Coercion_Breaks_This();
};
