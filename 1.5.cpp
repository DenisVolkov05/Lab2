#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double al = 3, bl = 1, cl = 2;
	//�.�. ������� ���������������, �� ����� ������ a(3,0,0) b(0,1,0) c(0,0,2)
	//����� ����� k = a + 2b + 3c; m = 3a + 2b + c
	//��� ����������� �������� ������� k(3,2,6) m(9,2,2)
	// [k, m] = (ky*mz-kz*my , kz*mx - kx*mz , kx*my - ky*mx)
	double kx = 3, ky = 2, kz = 6, mx = 9, my = 2, mz = 2;
	double qx, qy, qz;
	qx = ky * mz - kz * my;
	qy = kz * mx - kx * mz;
	qz = kx * my - ky * mx;
	cout << "���������� ���������� ������������ " << qx << ", " << qy << ", " << qz;
}