/*
filename	: firstStruct.cpp
designer	: Justin Benson
last edit	: 11/14/2017
description	: Program reads in 10 sets of data from a file
			  and prints the data in an easy-to-read format
*/
#include "stdafx.h"
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int PEOPLE_MAX = 100;

struct person
{
	string f_name;
	int IQ;
	int age;
};

int get_data(person people[], ifstream& fin);
void print_data(person people[], int count);

int main()
{
	person people[PEOPLE_MAX];
	int count = 0;

	ifstream fin;
	ofstream fout;

	fin.open("info.txt");
	fout.open("unoriginal_text.txt");

	if (!fin)
		cout << "ERROR: Could not open input file";

	count = get_data(people, fin);
	print_data(people, count);

	return 0;
}

int get_data(person people[], ifstream& fin)
{
	int count = 0;
	while(fin)
	{
		getline(fin, people[count].f_name);
		fin >> people[count].age >> people[count].IQ;
		fin.ignore(10, '\n');
		count++;
	}
	return count;
}

void print_data(person people[], int count)
{
	cout << left;
	for (int i = 0; i < count; i++)
	{
		cout << "Name:" << setw(20) << people[i].f_name
			<< "I.Q.:" << setw(5) << people[i].IQ
			<< "Age:" << setw(5) << people[i].age
			<< endl;

	}
}
