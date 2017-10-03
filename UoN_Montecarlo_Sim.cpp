// UoN_Montecarlo_Sim.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//Utilises iostream library to allow the user to input and output data
#include <iostream>
// utilises C++ Math library to allow for  more complex calculations
#include <cmath>
// Allows use of get char command to stop programme closing immediately
#include <cstdio>
//allow for generation of random numbers
#include<stdlib.h>

int main()
{
	//declare variables
	int iNvalue;
	double dInequalitycount = 0;

	std::cout << "Set the number of pairs to be used in the calculation \n";
	std::cin >> iNvalue;

	for (int i = 1; i <= iNvalue; ++i)
	{
		double x = ((double)rand() / (RAND_MAX));
		double y = ((double)rand() / (RAND_MAX));
		if ((pow(x, 2) + pow(y, 2)) < 1)
		{
			++dInequalitycount;
		}
	}
	double dFraction = dInequalitycount / iNvalue;


	std::cout << "4f = " << 4 * dFraction << " \n";
	std::getchar();
	return 0;
}
