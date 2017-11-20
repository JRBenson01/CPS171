// Randon_Number.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;


int main()
{
	int comp;
	int user;
	int count = 0;

	comp = rand() % 10 + 1;
	cout << "Enter an integer: " << comp << endl;
	cin >> user;
	count++;

	while (user != comp) {
		cout << "Incorrect." << "Try " << count << endl;
		cout << "Try again: ";
		cin >> user;
		if (count > 3) {
			break;
		}
	}
    return 0;
}

