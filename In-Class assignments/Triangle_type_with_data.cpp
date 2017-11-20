//*************************************
// Triangle_data.cpp 
// In-class exercise for CPS 171
// Designer: Justin Benson	
// Last Modified: 10/3/2017
//*************************************
// This program gets 3 triangle
// lengths and returns whether the
// lengths give a valid triangle 
// and if valid, what type of 
// triangle. The program can read
// through the entire file and 
// determine the type of triangle
// of each one
//*************************************

#include "stdafx.h"
#include <iomanip>
#include <iostream>
#include <fstream>

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

	//Declaring fstream
	ifstream fin;

	fin.open("tri_data.txt");

	//Formattting
	cout << "=============================================" << endl;
	
	fin >> len1 >> len2 >> len3;

	cout << right;

	//While loop
	while (fin)
	{

		//Echoing input
		cout << "Input: " << right
			<< setw(3) << len1 << ", "
			<< setw(3) << len2 << ", "
			<< " " << setw(4) << left << len3
			;

		//Checking if valid triangle

		if (len1 + len2 > len3 && len1 + len3 > len2 && len2 + len3 > len1)
			//Equallateral Check
			if (len1 == len2 && len1 == len3 && len2 == len3)
				cout << "EQUILATERAL" << endl;
		//Isociles Check
			else if ((len1 == len2) || (len1 == len3) || (len2 == len3))
				cout << "ISOCELES" << endl;
		//Scalene Check
			else
				cout << "SCALENE" << endl;
		else
			cout << "NOT A TRIANGLE" << endl;

		//Getting new values
		fin.ignore(20, '\n');
		fin >> len1 >> len2 >> len3;

	}

	//Formattting
	cout << "=============================================" << endl;

	return 0;
}
