//**************************************
// Filename: Food_store.cpp 
// In-class assignment for CPS 171
// Designer: Justin Benson
// Last Update: 9/12/2017
//**************************************
// Foodstore Program
// User gives the name of the farm, the
// item they want to buy, the quantity 
// to purchase, how much each one costs,
// and how much cash given.
// The computer then returns the cost of 
// the food and the change due given the 
// amount paid.
//***************************************

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int OUTPUT_SIZE = 20;

int main()
{
	//Decalring variables 
	string farmName;
	string foodName;
	int num_food;
	float food_cost;
	float amt_paid;
	float total_cost;
	float change;
	string FORMATTING_LINE = "=========================================";

	//Getting input

	//Formatting
	cout << FORMATTING_LINE << endl;

	//Farm name
	cout << "Name of Farm: ";
	getline(cin, farmName);

	//Food name
	cout << "Type of food: ";
	cin >> foodName;

	//Quantity of food
	cout << "Number of " << foodName << ": ";
	cin >> num_food;

	//Cost of food
	cout << "Price for one(include $): ";
	cin.ignore(10, '$');
	cin >> food_cost;

	//Results 
	total_cost = food_cost * num_food;
	cout << fixed << showpoint << setprecision(2) << num_food << " " << foodName << " at $" << food_cost << " each is $" << total_cost << endl;

	//Cash to pay
	cout << "Cash given(include $): ";
	cin.ignore(4, '$');
	cin >> amt_paid;
	
	//Formatting
	cout << FORMATTING_LINE << endl;

	//Printing Price results

	//Left Justifying
	cout << left;

	//Summary
	cout << "You bought " << num_food << " " << foodName << " for $" << food_cost << " each." << endl;

	//Amount Paid
	cout << setw(OUTPUT_SIZE);
	cout << setfill('.');
	cout << "Amount paid: " << "$" << amt_paid << endl;

	//Food Cost
	cout << setw(OUTPUT_SIZE);
	cout << "Cost: " << "$" << total_cost << endl;

	//Change Due
	change = amt_paid - total_cost;
	cout << setw(OUTPUT_SIZE);
	cout << "Change due: ";
	cout <<	"$" << change << endl;

	cout << "Thank you for shopping at " << farmName << endl;

	//Formatting 
	cout << FORMATTING_LINE << endl;

	
    return 0;
}

