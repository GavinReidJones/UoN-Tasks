// UoN_Real_Roots.cpp : Defines the entry point for the console application.
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
	double dAvalue, dBvalue, dCvalue, dRoot1, dRoot2;

	std::cout << "Evaluating Real Roots \n";
	std::cout << "Enter the coefficients of the quadratic in the form ax^2+bx+c=0 \n";
	//read value for a
	std::cout << "a =";
	std::cin >> dAvalue;
	//read value for b
	std::cout << "b =";
	std::cin >> dBvalue;
	//read value for c
	std::cout << "c =";
	std::cin >> dCvalue;
	
	//if the determinant is positive the result will be real
	if (dBvalue*dBvalue - 4 * dAvalue*dCvalue < 0)
	{
		//determinant is less than 0 so no real roots
		std::cout << "There are no real roots \n";
	
	}
	else
	{
		dRoot1 = (-dBvalue + sqrt(dBvalue*dBvalue - 4 * dAvalue*dCvalue)) / 2;
		dRoot2 = (-dBvalue - sqrt(dBvalue*dBvalue - 4 * dAvalue*dCvalue)) / 2;

		std::cout << "Root 1 is " << dRoot1 << " Root 2 is " << dRoot1 << "\n";
		
	}

    return 0;
}

