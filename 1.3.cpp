#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double ax = 3, ay = 7, az = -7;
	double bx = 1, by = -1, bz = 2;
	double cx = 2, cy = 2, cz = -1;
	double dx = 2, dy = 2, dz = -1;
	double matr;
	double x, y, z;
	matr = ax * (by * cz - cy * bz) - ay * (bx * cz - cx * bz) + az * (bx * cy - cx * by);
	if (matr == 0) cout << "Векторы не образуют базис";
	else
	{
		x = (dx * (by * cz - cy * bz) - ay * (dy * cz - dz * bz) + az * (dy * cy - dz * by)) / matr;
		y = (ax * (dy * cz - dz * bz) - dx * (bx * cz - cx * bz) + az * (bx * dz - cx * dy)) / matr;
		z = (ax * (by * dz - cy * dy) - ay * (bx * dz - cx * dy) + dx * (bx * cy - cx * by)) / matr;
	}
	cout << "Координаты вектора d " << x << ", " << y << ", " << z;
}