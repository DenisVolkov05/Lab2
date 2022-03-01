#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double S, pl = 2, ql = 3, alp = 5 * 3.14 / 6;
	double ab, al, bl;
	al = sqrt(9 * pow(pl, 2) + 6 * pl * ql * cos(alp) + pow(ql, 2));
	bl = sqrt(pow(pl, 2) - 8 * pl * ql * cos(alp) + 16 * pow(ql, 2));
	ab = 3 * pow(pl, 2) - 11 * pl * ql * cos(alp) - 4 * pow(ql, 2);
	S = sqrt(pow(al * bl, 2) - pow(ab, 2)) / 2;
	cout << "Площадь равна " << S;
}