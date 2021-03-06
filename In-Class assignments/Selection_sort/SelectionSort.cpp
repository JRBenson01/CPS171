/*
filename	: SelectionSort.cpp
designer	: Justin Benson
last edit	: 11/14/2017
description	: Program reads in 10 sets of data from a file
and sorts the data by First and last name, IQ, and age.
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
	string l_name;
	int IQ;
	int age;
};

int get_data(person people[], ifstream& fin);
void print_data(person people[], int count);
void sort_name(person people[], int count);
void sort_IQ(person people[], int count);
void sort_Age(person people[], int count);

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

	sort_name(people, count);
	cout << endl << "Sorting by last name" << endl << endl;
	print_data(people, count);

	sort_IQ(people, count);
	cout << endl << "Sorting by I.Q." << endl << endl;
	print_data(people, count);

	sort_name(people, count);	//Resets everything to be sorted by name so that the
								//secondary sorting is the person's age.

	sort_Age(people, count);
	cout << endl << "Sorting by Age" << endl << endl;
	print_data(people, count);

	return 0;
}

int get_data(person people[], ifstream& fin)
{
	int count = 0;
	while (fin)
	{
		getline(fin, people[count].f_name);
		getline(fin, people[count].l_name);
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
		cout << "First Name:" << setw(10) << people[i].f_name
			<< "Last Name: " << setw(25) << people[i].l_name
			<< "I.Q.:" << setw(5) << people[i].IQ
			<< "Age:" << setw(5) << people[i].age
			<< endl;

	}
}
void sort_name(person people[], int count)
{
	int store = 0;
	string last_name = "";
	person aux;
	for (int i = 0; i < count; i++)
	{
		store = i;
		for (int j = i; j < count; j++)
		{
			if (people[j].l_name < people[store].l_name ||
				(people[j].l_name == people[store].l_name && people[j].f_name < people[store].f_name))
			{
				store = j;
			}
		}
		aux = people[i];
		people[i] = people[store];
		people[store] = aux;
	}
}

void sort_IQ(person people[], int count)
{
	int store = 0;
	person aux;
	for (int i = 0; i < count; i++)
	{
		store = i;
		for (int j = i; j < count; j++)
		{
			if (people[j].IQ < people[store].IQ)
			{
				store = j;
			}
		}
		aux = people[i];
		people[i] = people[store];
		people[store] = aux;
	}

}

void sort_Age(person people[], int count)
{
	int store = 0;
	person aux;
	for (int i = 0; i < count; i++)
	{
		store = i;
		for (int j = i; j < count; j++)
		{
			if (people[j].age < people[store].age)
			{
				store = j;
			}
		}
		aux = people[i];
		people[i] = people[store];
		people[store] = aux;
	}

}


