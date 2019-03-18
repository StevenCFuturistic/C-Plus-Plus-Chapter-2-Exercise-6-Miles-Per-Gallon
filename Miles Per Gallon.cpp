// Miles Per Gallon.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Author: Steven Love C++ exercise # 6 
// C++ Eary Objects

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
   // variables
	int gastankGallons = 16;
	int miles = 350;
	int milesperGallon;


	// calculations
	milesperGallon = miles / gastankGallons;

	// outputs
	cout << " A cars gas tank holds " << gastankGallons << " of gasoline.\n";
	cout << " The car gets " << miles << " per tank of gas before refueling. \n";
	cout << " This car gets  " << milesperGallon << " miles per gallon of gas." ;


}
