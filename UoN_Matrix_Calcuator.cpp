// UoN_Matrix_Calcuator.cpp : Defines the entry point for the console application.
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
	int iMatrixU[1][3], iMatrixV[1][3], iMatrixA[3][3], iMatrixB[3][3], iMatrixResult1[1][3], iMatrixResult2[3][3];
	int i= 0;
	iMatrixU[0][0] = 1;
	iMatrixU[0][1] = 2;
	iMatrixU[0][2] = 3;

	iMatrixV[0][0] = 6;
	iMatrixV[0][1] = 5;
	iMatrixV[0][2] = 4;
	std::cout << "u-v = \n";
	for (int i = 0; i < 3; ++i)
	{
		iMatrixResult1[0][i] = iMatrixU[0][i] - iMatrixV[0][i];
		std::cout << " " << iMatrixResult1[0][i] << "\n";
	}

    return 0;
}

