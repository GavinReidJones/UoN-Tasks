// UoN_Fibonacci_Sequence.cpp : Defines the entry point for the console application.
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
	int iNvalue, iFibvalue1, iFibvalue2, iFibtemp;

	//ask for user input
	std::cout << "What number would you like to display the fibonacci sequence up to? \n";
	std::cin >> iNvalue;
	//initialises the first steps of the sequence
	iFibvalue1 = 1;
	iFibvalue2 = 0;
	//display first value
	std::cout << "The fibonacci sequence: \n";
	std::cout << iFibvalue1 << "\n";


	//recursive loop to calculate sequence 
	while ((iFibvalue1 + iFibvalue2) < iNvalue)
	{
		//store sum of two previos values in temporary variable
		iFibtemp = iFibvalue1 + iFibvalue2;
		//set second value equal to first value
		iFibvalue2 = iFibvalue1;
		//set first value equal to the sum stored in the temp variable
		iFibvalue1 = iFibtemp;
		//display sum
		std::cout << iFibvalue1 << "\n";
	}


	std::getchar();

	return 0;
}
