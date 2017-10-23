// q1a.cpp : Defines the entry point for the console application.
//
// Program written by Gavin Reid-Jones for Assesed Course Work 1 last edited 23/10/17


//include statements to allow the program to access in/out fuctionality, maths functions and the vector class.
#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <vector>

//Allows the program to call functions from the standard library without referencing it.
using namespace std;


// Function to calculate the legendre polynomial for a given x and n values, the function passes the variables x and n from the main procedure
double legendre(int n, double x)
{
	// variable used to calculate the recurrance of the polynomial in place of n as it used as a parameter
	double i;
	//Vectors are used as dynamic arrays allowing the system to expand the array as it goes.
	vector<double> P_n_x;
	//A variable used to store the next step in the reccurance before it is pushed to the vector.
	double nextstep;
	//Preallocates a section of memory to store the vector.
	P_n_x.reserve(12);

	//pushes the constant values of the first two steps in the reccurance to the vector array.
	P_n_x.push_back(1.0);
	P_n_x.push_back(x);

	//Loops the reccurance calculation until it reaches n  number of reccurances.
	for (i = 2; i < n+1; i++)
	{
		//calculates the recursion formula for the next step in the process and then stores it in the vector
		nextstep = (((2 * i )+ 1) / (i + 1))*x*P_n_x[i - 1] - (i / (i + 1))*P_n_x[i - 2];
		P_n_x.push_back(nextstep);
	}

	//outputs the final result of the recursion formula
	return P_n_x[n];

}

int main()
{
	//values that the Legendre function uses to calculate the result
	double dXval = 0.3;
	int iNval = 2;
	double dResult;

	//Calling the Legendre function
	dResult=legendre(iNval, dXval);

	cout << "The Legendre Polynomial is : " << dResult << "\n";
	return 0;
}



