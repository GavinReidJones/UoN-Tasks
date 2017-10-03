// UoN_Power_Calculator.cpp : Defines the entry point for the console application.
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
	int iNvalue, iMvalue, iJsum;
	bool bRunning = true;
	char cResponse;
	
	//creates main loop not closing the program til the user wnats to
	while (bRunning == true)
	{

		//ask for user input
		std::cout << "Enter n \n";
		std::cin >> iNvalue;
		std::cout << "Enter m \n";
		std::cin >> iMvalue;
		iJsum = 0;

		//loop as many times as the user inputted 
		for (int j = 1; j < iNvalue; ++j)
		{
			//add j^2 to the total sum
			iJsum += pow(j, iMvalue);
		}

		//display result
		std::cout << "The sum of j^m to n is " << iJsum << "\n \n";

		std::cout << "Would you like to perform another calculation? y/n  \n";

		std::cin >> cResponse;

		//checks user response if it is n the program closes
		if (cResponse == 110)
		{
			bRunning = false;
		}
	}
	std::getchar();

	return 0;
}


