#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Named Constants
const double GALLONS_PER_SQFT = 1.0 / 110.0;
const double LABOR_HOURS_PER_GALLON = 8.0 / 110.0;
const double LABOR_COST_PER_HOUR = 25.0;

/*
Purpose:Get and validate # of rooms
Preconditions: None
Postconditions: Returns integer >= 1
*/

int getNumRooms()
{
	int rooms;
	cout << "Enter the number of rooms: ";
	cin >> rooms;

	while (rooms < 1)
	{
		cout << "Invalid input. Please enter at least one: ";
		cin >> rooms;
	}
	return rooms;
}
/*
Purpose: Get and validates price per gallon
Preconditions: None
Postconditions: Returns a double >= 10.00
*/
double getPricePerGallon()
{
	double price;
	cout << "Enter the price per gallon (>= 10): $";
	cin >> price;
	while (price < 10.00)
	{
		cout << "Invalid input. Please enter a price of at least $10.00: $";
		cin >> price;
	}
	return price;
}

/*
Purpose: get and validate square footage for room
Preconditions: None
Postconditions: Returns a double >= 0
*/
double getSquareFootage(int roomNumber)
{
	double sqft;
	cout << "Enter the square footage for room " << roomNumber << ": ";
	cin >> sqft;

	while (sqft < 0)
	{
		cout << "Invalid input. Please enter a value 0 or greater: ";
		cin >> sqft;
	}
	return sqft;
}

