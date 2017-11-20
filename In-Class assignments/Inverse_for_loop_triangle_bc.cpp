//============================================================================
// Name        : triangle_printing.cpp
// Author      : Justin Benson
// Version     :
// Copyright   : 
// Description : Program outputs numbers (from smallest to largest) in a line 
//				and then sequentially decreases the amount of numbers per line
//============================================================================

#include "stdafx.h"
#include <iostream>
using namespace std;

int main() {

	//Declaring varialbes
	int inside = 0;
	int outside = 0;
	int num1 = 0;
	int num2 = 0;
	char flag = 'y';

	do
	{
		cout << "Enter number of lines: ";
		cin >> num1;
		cout << "Numbers per line: ";
		cin >> num2;
		cout << endl;

		for (outside = num1; outside >= 1; outside--)
		{
			for (inside = 1; inside <= outside; inside++)
			{
				cout << inside << " ";
			}
			cout << endl;
		}
		cout << "\nAgain?(y/n): ";
		cin >> flag;

	} while (flag == 'y' || flag == 'Y');


	cout << "Live long and prosper" << endl; // prints Live long and prosper

	return 0;
}