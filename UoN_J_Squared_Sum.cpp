// UoN_J_Squared_Sum.cpp : Defines the entry point for the console application.
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
	int iNvalue, iJsum;
	//ask for user input
	std::cout << "Enter n \n";
	std::cin >> iNvalue;
	iJsum = 0;

	//loop as many times as the user inputted 
	for (int j = 1; j < iNvalue; ++j)
	{
		//add j^2 to the total sum
		iJsum += j*j;
	}
	
	//display result
	std::cout << "The sum of j^2 to n is " << iJsum;
	
	std::getchar();

    return 0;
}

