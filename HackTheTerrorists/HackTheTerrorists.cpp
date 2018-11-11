// HackTheTerrorists.cpp
//Nathaniel Grimsley
//11/11/2018

//We include the required dependencies
#include "pch.h"
#include <iostream>

using namespace std;

void NormalTransaction(int x, int y);
void HackedTransaction(int& x, int& y);

//we begin the main function, where code execution begins and ends
int main()
{
	int bankOfTerror = 175000000;
	int joesCoffeeShop = 13;
	cout << "Original account values: \n";
	cout << "Terrorists: $" << bankOfTerror << endl;
	cout << "Joe's Coffee Shop: $" << joesCoffeeShop << endl;

	cout << "\nCommencing normal transaction -";
	NormalTransaction(bankOfTerror, joesCoffeeShop);
	cout << "\nTerrorists: $" << bankOfTerror;
	cout << "\nJoe's Coffee Shop: $" << joesCoffeeShop << endl;

	cout << "\nCommencing hacked transaction -";
	HackedTransaction(bankOfTerror, joesCoffeeShop);
	cout << "\nTerrorists: $" << bankOfTerror;
	cout << "\nJoe's Coffee Shop: $" << joesCoffeeShop << endl;

	return 0;
}

void NormalTransaction(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}

void HackedTransaction(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}