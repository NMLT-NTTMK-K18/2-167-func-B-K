#include <iostream>
using namespace std;

int main()
{
	cout << "Nhap n = ";
	int n;
	cin >> n;

	float s = 0;
	int i = 1;
	while (i <= 2 * n + 1)
	{
		s = s + (float)i / (i + 1);
		i = i + 2;
	}

	cout << "s = " << s;

	return 0;
}