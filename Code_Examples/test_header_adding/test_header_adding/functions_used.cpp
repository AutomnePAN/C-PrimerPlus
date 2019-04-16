
#include "pch.h"
#include <iostream>
#include <cmath>
#include "coordin.h"
using namespace std;

polar rect2polar(rect xypos)
{
	polar answer;

	answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
	answer.angle = atan(xypos.y / xypos.x);
	return answer;
};

void showpolar(polar dapos)
{
	const double Rad_to_deg = 57.295;

	cout << "distance = " << dapos.distance << "\n";
	cout << "angle = " << dapos.angle*Rad_to_deg << " deg \n";

}