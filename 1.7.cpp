#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double ax = 8, ay = -15, az = 3, ml = 51;
	double mx, my, mz = 0;
	//Из скалярного произведения будет следовать что mz = 0(т.к. cos = 0)
	//mx ^ 2 + my ^ 2 = 51 ^ 2 = 2601;
	//ax*mx + ay*my = 0;
	my = sqrt(pow(ml, 2) * pow(ax, 2)/ (pow(ay, 2) + pow(ax, 2)));
	mx = my * (-1) * ay / ax;
	cout << "Координаты m " << mx << ", " << my << ", " << mz;
}