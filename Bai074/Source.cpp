#include <iostream>
using namespace std;
float tinhS(int, int);

int main()
{
	cout << "Nhap x = ";
	int x;
	cin >> x;

	cout << "Nhap n = ";
	int n;
	cin >> n;

	float s;
	s = tinhS(x, n);

	cout << "s = " << s;

	return 0;
}

float tinhS(int xx, int nn)
{
	float s = 0;
	int t = 1;
	int m = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * xx;
		m = m * i;
		s = s + (float)t / m;
		i = i + 1;
	}
	return s;
}