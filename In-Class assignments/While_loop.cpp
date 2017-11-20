#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	char ltr;
	int num, count;

	ltr = 'a';

	//n = 10;

/*	while (ltr <= 'z') {
		cout << ltr << endl;
		ltr++;
	}
*/
	num = 67;
	count = 0;

	while (num <= 100) {
		if ((num % 2) == 0) {
			count++;
		}
		num++;
		//cout << num << endl;
	}
	cout << count << " Odd numbers" << endl;
    return 0;
}

