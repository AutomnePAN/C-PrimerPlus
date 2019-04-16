#include "pch.h";
#include <iostream>
using namespace std;

extern double warming;

void update(double dt);
void local();

void update(double dt)
{
	warming += dt;
	cout << "The warming is now : " << warming << "\n";
	cout << "The adress of 'warming ' is:  " << &warming << "\n";

}

void local()
{
	double warming = 0.8;
	cout << "The local warming is:  " << warming << "\n";
	cout << "its adress is " << &warming << "\n";
	cout << "But the global warming is " << ::warming << endl;

}