/*
===========================================
filename	: index.cpp
creator		: Justin Benson
description	: Program creates an array 
of 50 doubles, 1/2 is are the inxed squared
and the other is 
===========================================
*/

#include <iostream> 
#include <iomanip>

using namespace std;

const int OUTPUT_LEN = 6;
const int ARRAY_LEN = 50;
const int NUM_PER_LINE = 10;

int main() 
{
	int pos = 0;
	double myarray[ARRAY_LEN];

	
	for (int i = 0; i < ARRAY_LEN/2; i++)
	{
		myarray[i] = i * i;
	}

	for (int i = ARRAY_LEN/2; i < ARRAY_LEN; i++)
	{
		myarray[i] = i * 3;
	}
	

	for (int i = 0; i < ARRAY_LEN; i++)
	{
		cout << fixed << showpoint << setprecision(1);
		cout << setw(OUTPUT_LEN) << myarray[i];
		if (i % 10 == 0)
		{
			cout << endl;
		}
	}
	cout << endl;
}

