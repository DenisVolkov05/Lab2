#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double ml = 1, nl = 4, alp = 3.14 / 3, pr;
	//a = m-2n ;  b = -2m+3n
	//pr_b(a-b) = (a-b)*b/|b|
	pr = (19 * ml * nl * cos(alp) - 15 * pow(nl, 2) - 6 * pow(ml, 2)) / sqrt(4 * pow(ml, 2) - 12 * ml * nl * cos(alp) + 9 * pow(nl, 2));
	cout << "Проекция равна " << pr;
}