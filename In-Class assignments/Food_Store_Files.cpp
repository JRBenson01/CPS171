//****************************************
// Filename: Food_Store_Files.cpp
// Lab assignment for CPS 171
// Designer: Justin Benson	
// Last Modified: 9/18/2017
//****************************************
// Food store file I/O program
// Program gets input on:
// -Name of farm 
// -Type of food
// -Amount buying
// -Cost of individual food
// -Amount paid
// from file and returns:
// -Total cost 
// -Change due
//****************************************

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

const int OUTPUT_SIZE = 20;

int main()
{

	//Declaring variables
	string farmName;
	string foodName;
	int num_food;
	float food_cost;
	float amt_paid;
	float total_cost;
	float change;
	string FORMATTING_LINE = "=======================================";

	//Declaring File I/O
	ifstream inFile;
	ofstream outFile;

	//Opening file
	inFile.open("input.txt");
	outFile.open("output.txt");

	//Formatting Line
	cout << FORMATTING_LINE << endl;
	outFile << FORMATTING_LINE << endl;

	//File Checking
	if (inFile)
		cout << "Input file successfuly opened." << endl;

	if (!inFile)
		cout << "Input file failed to open" << endl;

	if (outFile)
		cout << "Output file succesfully opened." << endl;

	if (!outFile)
		cout << "Output file fail to open" << endl;

	//Getting file input

	//Formatting
	cout << FORMATTING_LINE << endl;

	//Farm name
	getline(inFile, farmName);
	cout << "Name of Farm: " << farmName << endl;
	outFile << "Name of Farm: " << farmName << endl;

	//Food name 
	inFile >> foodName;
	cout << "Type of food: " << foodName << endl;
	outFile << "Type of food: " << foodName << endl;

	//Quantity of food
	inFile >> num_food;
	cout << "Number of " << foodName << ": " << num_food << endl;
	outFile << "Number of " << foodName << ": " << num_food << endl;

	//Cost of food
	inFile.ignore(10, '$');
	inFile >> food_cost;
	cout << "The price for one is: " << food_cost << endl;
	outFile << "The price for one is: " << food_cost << endl;

	//Results
	total_cost = food_cost * num_food;
	cout << fixed << showpoint << setprecision(2);
	cout << num_food << " " << foodName << " at $" << food_cost << " each is $";
	cout << total_cost << endl;
	outFile << fixed << showpoint << setprecision(2);
	outFile << num_food << " " << foodName << " at $" << food_cost << " each is $";
	outFile << total_cost << endl;

	//Cash to pay
	inFile.ignore(10, '$');
	inFile >> amt_paid;
	cout << "Cash given: $" << amt_paid << endl;
	outFile << "Cash given: $" << amt_paid << endl;

	//Formatting 
	cout << FORMATTING_LINE << endl;
	outFile << FORMATTING_LINE << endl;

	//Printing restults

	//Left Justifying 
	cout << left;
	outFile << left;

	//Summary 
	cout << "You bought " << num_food << " " << foodName << " for $";
	cout << food_cost << " each." << endl;
	outFile << "You bought " << num_food << " " << foodName << " for $";
	outFile << food_cost << " each." << endl;

	//Amout Paid
	cout << setw(OUTPUT_SIZE);
	cout << setfill('.');
	cout << "Amount paid: " << "$" << amt_paid << endl;
	outFile << setw(OUTPUT_SIZE);
	outFile << setfill('.');
	outFile << "Amount paid: " << "$" << amt_paid << endl;

	//Food cost 
	cout << setw(OUTPUT_SIZE);
	cout << "Cost: " << "$" << total_cost << endl;
	outFile << setw(OUTPUT_SIZE);
	outFile << "Cost: " << "$" << total_cost << endl;

	//Change due
	change = amt_paid - total_cost;
	cout << setw(OUTPUT_SIZE);
	cout << setfill('.');
	cout << "Change due: ";
	cout << "$" << change << endl;
	outFile << setw(OUTPUT_SIZE);
	outFile << setfill('.');
	outFile << "Change due: ";
	outFile << "$" << change << endl;

	cout << "Thank you for shopping at " << farmName << endl;
	outFile << "Thank you for shopping at " << farmName << endl;
	//Formatting Line
	cout << FORMATTING_LINE << endl;
	outFile << FORMATTING_LINE << endl;

    return 0;
}

