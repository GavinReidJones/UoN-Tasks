// UoN_Coordinate_Converter1.cpp : Defines the entry point for the console application.
//

// UoN_Coordinate_Converter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//Utilises iostream library to allow the user to input and output data
#include <iostream>
// utilises C++ Math library to allow for  more complex calculations
#include <cmath>
// Allows use of get char command to stop programme clsoing immediately
#include <cstdio>


int main()
{
	//declare variables
	double dXvalue, dYvalue, dZvalue, dRvalue, dThetavalue, dPhivalue;
	const double pi = 3.141592653;

	std::cout << "Converting Coordinates \n";
	std::cout << "Enter the Cartesian Coordinates \n";
	//read value for x
	std::cout << "x =";
	std::cin >> dXvalue;
	//read value for y
	std::cout << "y =";
	std::cin >> dYvalue;
	//read value for z
	std::cout << "z =";
	std::cin >> dZvalue;

	//calculates r
	dRvalue = sqrt(dXvalue*dXvalue + dYvalue*dYvalue + dZvalue + dZvalue);
	// if y/x is less than zero, its shifted right two cycles to stop a negative angle being produced
	if ((dYvalue / dXvalue)<0)
	{
		//calculate Theta
		dThetavalue = atan((dYvalue / dXvalue)+2*pi);
		//convert from radians to degrees
		dThetavalue = dThetavalue * 180 / pi;
	}
	//no shift needed
	else
	{
		//calculate Theta
		dThetavalue = atan(dYvalue / dXvalue);
		//convert from radians to degrees
		dThetavalue = dThetavalue * 180 / pi;
	}

	//Calculate Phi
	dPhivalue = acos(dZvalue / dRvalue);
	//convert from radians to degrees
	dPhivalue = dPhivalue * 180 / pi;

	//display polar coordinates
	std::cout << "The Polar Coordinates are: \n";
	std::cout << "r = " << dRvalue << "\n";
	std::cout << "Theta = " << dThetavalue << "\n";
	std::cout << "Phi = " << dPhivalue << "\n";

	std::getchar();


	return 0;
}