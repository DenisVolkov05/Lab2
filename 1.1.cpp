#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double ax = -7, ay = -5, az = 6;
	double bx = -2, by = 5, bz = -3;
	double cx = 3, cy = -2, cz = 4;
	double dx = 1, dy = 2, dz = 2;
	double ABx, ABy, ABz, CDx, CDy, CDz, ADx, ADy, ADz;
	ABx = bx - ax;
	ABy = by - ay;
	ABz = bz - az;
	CDx = dx - cx;
	CDy = dy - cy;
	CDz = dz - cz;
	ADx = dx - ax;
	ADy = dy - ay;
	ADz = dz - az;
	double abl, cdl, adl;
	abl = sqrt(pow(ABx, 2) + pow(ABy, 2) + pow(ABz, 2));
	cdl = sqrt(pow(CDx, 2) + pow(CDy, 2) + pow(CDz, 2));
	adl = sqrt(pow(ADx, 2) + pow(ADy, 2) + pow(ADz, 2));
	cout << "координаты AB: " << ABx << ", " << ABy << ", " << ABz << endl;
	cout << "координаты CD: " << CDx << ", " << CDy << ", " << CDz << endl;
	cout << "координаты AD: " << ADx << ", " << ADy << ", " << ADz << endl;
	cout << "модуль AB: " << abl << endl;
	cout << "модуль CD: " << cdl << endl;
	cout << "модуль AD: " << adl << endl;

	double cos, alp;
	double ACx, ACy, ACz;
	ACx = cx - ax;
	ACy = cy - ay;
	ACz = cz - az;
	cos = (ABx * ACx + ABy * ACy + ABz * ACz) / sqrt((pow(ABx, 2) + pow(ABy, 2) + pow(ABz, 2)) * (pow(ACx, 2) + pow(ACy, 2) + pow(ACz, 2)));
	alp = acos(cos) * 180 / 3.14;
	cout << "Угол между векторами AB и AC равен " << alp << endl;

	double pr;
	pr = (ADx * ABx + ADy * ABy + ADz * ABz) / abl;
	cout << "Проекция AD на AB равна " << pr << endl;

	double sum, S;
	sum = pow((ABy * ADz - ADy * ABz), 2) + pow((ABx * ADz - ADx * ABz), 2) + pow((ABx * ADy - ADx * ABy), 2);
	S = sqrt(sum) / 2;
	cout << "Площадь ABD равна " << S << endl;

	double V, matr;
	matr = ACx*(ABy * ADz - ADy * ABz) - ACy*(ABx * ADz - ADx * ABz) + ACz*(ABx * ADy - ADx * ABy);
	V = matr / 6;
	cout << "Объем пирамиды равен " << V << endl;

	if (matr > 0) cout << "Тройка векторов AB, AC, AD является правой " << endl;
	else cout << "Тройка векторов AB, AC, AD является левой " << endl;

	double ortx, orty, ortz;
	ortx = ABx / abl;
	orty = ABy / abl;
	ortz = ABz / abl;
	cout << "Координаты орта вектора AB " << ortx << ", " << orty << ", " << ortz << endl;

	double cenx, ceny, cenz;
	cenx = (ax + bx + cx) / 3;
	ceny = (ay + by + cy) / 3;
	cenz = (az + bz + cz) / 3;
	cout << "Координаты цетнра тяжести ABC равны " << cenx << ", " << ceny << ", " << cenz << endl;
}