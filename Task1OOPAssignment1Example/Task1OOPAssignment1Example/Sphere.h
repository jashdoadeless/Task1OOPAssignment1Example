#pragma once
#include "Shape3D.h"

class Sphere: public Shape3D
{
	/*
	The following are member variables and methods as they are part of a class.
	*/
private:
	/*This is an access level. This means that another class,
	* or the main console application can not access the 
	* variables or methods below directly
	*/
	double radius;
	double diameter;
	double surface_area; 
	/*
	I have chosen to use lowercase for variables, with underscores for readability.
	*/
	double volume;
	/*
	The above shows the abstraction of the features of a sphere.
	*/
public:
	/*Both the Constructor and Destructor need to be public. 
	* Both of the calculation methods have been made public so that the main program can
	* call these methods.
	*/
	Sphere();
	~Sphere();
	double calc_Surface_Area();
	double calc_Volume();
	void set_Radius(double radius_p);
	double get_Radius();
	/*
	The above shows the abstraction of the functions of a sphere.
	*/
};

