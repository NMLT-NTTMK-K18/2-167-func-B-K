#include <iostream>
using namespace std;
int timChuSoLonNhat(int);

int main()
{
	cout << "nhap n = ";
	int n;
	cin >> n;

	int lc;
	lc = timChuSoLonNhat(n);

	cout << "lc = " << lc;

	return 0;
}

int timChuSoLonNhat(int nn)
{
	int lc = nn % 10;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv > lc)
			lc = dv;
		t = t / 10;
	}
	return lc;
}