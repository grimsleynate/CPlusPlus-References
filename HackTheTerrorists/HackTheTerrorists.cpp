// HackTheTerrorists.cpp
//Nathaniel Grimsley
//11/11/2018

//We include the required dependencies
#include "pch.h"
#include <iostream>

using namespace std;

//this is a function prototype that will swap values without references
void NormalTransaction(int x, int y);
//this is a function prototype that will swap values with references
void HackedTransaction(int& x, int& y);

//we begin the main function, where code execution begins and ends
int main()
{
	//we create a value for the terrorist's bank account
	int bankOfTerror = 175000000;
	//we create a value for Joe's bank account
	int joesCoffeeShop = 13;
	//We print out the original values.
	cout << "Original account values: \n";
	cout << "Terrorists: $" << bankOfTerror << endl;
	cout << "Joe's Coffee Shop: $" << joesCoffeeShop << endl;

	//We print out the values after doing a normal transaction
	cout << "\nCommencing normal transaction -";
	//This calls the NormalTransaction function which swaps values without references 
	NormalTransaction(bankOfTerror, joesCoffeeShop);
	cout << "\nTerrorists: $" << bankOfTerror;
	cout << "\nJoe's Coffee Shop: $" << joesCoffeeShop << endl;

	//We print out the values after hacking the bank accounts
	cout << "\nCommencing hacked transaction -";
	//This calls the HackedTransaction function which swaps the values using references
	HackedTransaction(bankOfTerror, joesCoffeeShop);
	cout << "\nTerrorists: $" << bankOfTerror;
	cout << "\nJoe's Coffee Shop: $" << joesCoffeeShop << endl;

	return 0;
}

//this creates a function that will swap two values without using references
void NormalTransaction(int x, int y)
{
	//we create a temporary variable to store the value of x
	int temp = x;
	//we swap the y value for the x value.
	x = y;
	//we set y to the old x value, thereby swapping the values
	y = temp;
}

//this creates a function that will swap two values using references
void HackedTransaction(int& x, int& y)
{
	//we create a temporary variable to store the value of x
	int temp = x;
	//we swap the y value for the x value.
	x = y;
	//we set y to the old x value, thereby swapping the values
	y = temp;
}