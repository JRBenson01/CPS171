//*********************************
// Filename: Triangle_Type.cpp 
// Triangle Program for CPS 171
// Designer: Justin Benson
// Last Modified: 9/21/2017
//*********************************
// This program gets 3 triangle
// lengths and returns whether the
// lengths give a valid triangle 
// and if valid, what type of 
// triangle.
//*********************************

#include "stdafx.h"
#include <iostream>

const int OUTPUT_LENGTH = 10;

using namespace std;

int main()
{
	//Declaring Variables
	int len1, len2, len3;	//Triangle lengths
	bool triangle;
	bool equalLat = false;
	bool iso = false;
	bool scalene = false;

	//Formattting
	cout << "=============================================" << endl;

	//Getting input for the sides
	cout << "Enter three sides of the triangle: ";
	cin >> len1 >> len2 >> len3;

	//Echoing input
	cout << "You entered: " << len1 << ", " << len2 << ", " << len3 << endl;

	//Checking if valid triangle


	if (len1 + len2 > len3 && len1 + len3 > len2 && len2 + len3 > len1)
		//Equallateral Check
		if (len1 == len2 && len1 == len3 && len2 == len3)
			cout << "The triangle is equallateral" << endl;
		//Isociles Check
		else if ((len1 == len2) || (len1 == len3) || (len2 == len3))
			cout << "The triangle is isociles" << endl;
		//Scalene Check
		else
			cout << "The triangle is scalene" << endl;
	else
		cout << "Not a triangle" << endl;

	//Formattting
	cout << "=============================================" << endl;

    return 0;
}

