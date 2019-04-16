#include "pch.h"
#include <iostream>
using namespace std;

extern int tom;
static int dick = 75;
int harry = 99;

void remote_access()
{
	cout << "remote_access() reports the following addresses: \n";
	cout << "tom : " << &tom << " dick: " << &dick << " harry: " << &harry << "\n";
}