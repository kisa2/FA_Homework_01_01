//	Financial_Algorithms_Homework_01_01.cpp : Defines the entry point for the console application.
//	Kis Anett
//	CW88F1

#include "stdafx.h"
#include <cmath>
#include <iostream>
using namespace std;


int main()
//Gyakorlo feladat
{

	float current, rate, target;
	cout << "Current:" << " ";
	cin >> current;
	cout << "Rate:" << " ";
	cin >> rate;
	cout << "Target:" << " ";
	cin >> target;

	int years = 0;
	while (current < target)
	{
		current *= (1 + rate);
		years++;
	}
	cout << "Years to reach target: " << years << endl;
	cout << current << endl;

	char temp;
	cout << endl;
	cout << "Press enter to exit application" << endl;
	cin >> temp;
	return 0;
}
