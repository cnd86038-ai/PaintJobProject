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

