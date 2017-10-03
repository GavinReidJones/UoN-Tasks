// UoN_Basic_Calculator.cpp : Defines the entry point for the console application.
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
	// double variable type so that no truncation errors are present
	double dResult;
	
	//Calculation will be wrong due to rounding error in 19/5, 2 ints
	dResult = 19 / 5 - 1.8;
	// Display calculation
	std::cout << "19/5 - 1.8 = " << dResult << "\n";

	//Calculation will be wrong due to rounding error in 17/4.0, int and double
	dResult = 17 / 4.0 - 6.25;
	// Display calculation
	std::cout << "17/4 - 6.25 = " << dResult << "\n";

	//Calculation will be wrong due to rounding error in 56/5 , 2 ints
	dResult = 56 - 5 *(56/5);
	// Display calculation
	std::cout << "56 - 5 *(56/5) = " << dResult << "\n";

	//Calculation will be wrong due to rounding error in 14/4 , 2 ints
	dResult =28/(14/4);
	// Display calculation
	std::cout << "28 / (14 / 4) = " << dResult << "\n";

	//Calculation will be wrong due to rounding error in 19/5
	dResult = 16.0 * (1 / 4) -16 * (1.0/4.0);
	// Display calculation
	std::cout << "16.0 * (1 / 4) -16 * (1.0/4.0) = " << dResult << "\n";
	std::getchar();

	return 0;
}

 