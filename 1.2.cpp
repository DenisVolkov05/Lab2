#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double ax = -5, ay = -5, bx = -15, by = 10, cx = 0, cy = 20, hx, hy;
	/*(x + 15) * 5 + (y - 10) * 15 = 0;
	y = (15 - x) / 3;
	(x + 5) / 20 + 5 = (y - 5) / 20 - 5 (уравнение AC);
	y = (40 + 3x) / 5;*/
	hx = -3.21;
	hy = 6.07;
	double visx, visy;
	visx = hx - bx;
	visy = hy - by;
	cout << "Координаты высоты " << visx << ", " << visy << endl;

	//Из равентства углов получаем BA*BM/|BA||BM|=BC*BM/|BC||BM|
	//-10x+5y/sqrt(125)=15x+10y/sqrt(325)
	//(x + 5) / 20 + 5 = (y - 5) / 20 - 5 (уравнение AC);
	double Mx = -0.48, My = 7.71;
	double bisx, bisy;
	bisx = Mx - bx;
	bisy = My - by;
	cout << "Координаты биссектрисы " << bisx << ", " << bisy << endl;

	double mx, my;
	mx = (ax + cx) / 2;
	my = (ay + cy) / 2;
	double medx, medy;
	medx = mx - bx;
	medy = my - by;
	cout << "Координаты медианы " << medx << ", " << medy << endl;
}