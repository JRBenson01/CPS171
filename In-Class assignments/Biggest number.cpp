//*********************************
// Filename: Biggest number.cpp
// In-class assignment for CPS 171
// Designer: Justin Benson
// Last edit: 9/19/2017
//*********************************
// Program gets 3 integers from
// user and returns the biggset
// and the smallest integer
//*********************************

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	//Declaring variables
	int int1, int2, int3;
	int int_L, int_S;
	int int_same, int_out;
	bool all_same;
	bool two_same;
	
	//Formatting 
	cout << "==================================" << endl;

	//Getting input
	cout << "Enter three integers: ";
	cin >> int1 >> int2 >> int3;
	
	//Checking to see if all the numbers are the same
	if (int1 == int2 && int1 == int3)
	{
		all_same = true;
	}
	else
	{
		all_same = false;
	}


	//Checking to see if two of the numbers are the same
	if (int1 == int2 || int1 == int3 || int2 == int3)
		two_same = true;
	else
		two_same = false;

	//if two numbers are the same, find what number that is
	if (two_same)
		if (int1 == int2)
		{
			int_same = int1;
			int_out = int3;
		}
		else if (int1 == int3)
		{
			int_same = int1;
			int_out = int2;
		}
		else if (int2 == int3)
		{
			int_same = int2;
			int_out = int1;
		}

	//Getting biggest number

	//Will calculate biggset number if all numbers are different
	if (!all_same || !two_same)	
		if (int1 > int2 && int1 > int3)
			int_L = int1;

		else if (int2 > int1 && int2 > int3)
			int_L = int2;

		else if (int3 > int1 && int3 > int2)
			int_L = int3;
		else
			if (int1 == int2 && int1 == int3)
				all_same = true;
			else
				all_same = false;


	//Getting smallest integer for all different numbers
	if (!all_same || !two_same)
		if (int1 < int2 && int1 < int3)
			int_S = int1;

		else if (int2 < int1 && int2 < int3)
			int_S = int2;

		else if (int3 < int1 && int3 < int2)
			int_S = int3;

	//Getting greatest and smallest number when two numbers the same
	if (two_same)
	{
		if (int_same > int_out)
		{
			int_L = int_same;
			int_S = int_out;
		}
		else if (int_same < int_out)
		{
			int_L = int_out;
			int_S = int_same;
		}
	}

	//Formatting 
	cout << "==================================" << endl;

	//Returning values
	cout << "You inputted: " << int1 << ", " << int2 << ", and " << int3 << endl;
	if (!all_same)
	{
		cout << "The largest number is " << int_L << endl;
		cout << "The smallest number is " << int_S << endl;
	}
	else
		cout << "All your numbers are the same, you suck at this game." << endl;
	//Formatting 
	cout << "==================================" << endl;
	


    return 0;
}

