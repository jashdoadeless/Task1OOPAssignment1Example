// Task1OOPAssignment1Example.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "Sphere.h" 
/*
The Sphere.h file has been included so tha I can create objecs of this class.
*/

int main()
{
	Sphere Sphere_O;// The object has now been created of the Sphere class.
	Sphere_O.calc_Surface_Area(); // This is an instance method as it is being called in the instance of an object.
	Sphere_O.set_Radius(5.43);
	cout << "The radius value is: " << Sphere_O.get_Radius();
	

	Sphere_O.shape_Type();
	Sphere_O.count_edges = 0;

    return 0;
}

