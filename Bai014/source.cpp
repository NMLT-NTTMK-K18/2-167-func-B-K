#include <iostream>
using namespace std;

int main()
{
	cout << "Nhap x : ";
	double x;
	cin >> x;

	double x2 = x * x;
	double x4 = x2 * x2;
	double x8 = x4 * x4;
	double x16 = x8 * x8;
	double x32 = x16 * x16;

	cout << "x32 = " << x32;
	return 0;
}