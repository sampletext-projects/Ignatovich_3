#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "russian");
	int n;
	cin >> n;

	double r = 0;
	double k = 1;
	int i = 1;
	int m = 0;

	while (m < n)
	{
		r += i / k;
		k *= 2;
		i *= -1;
		m++;
	}
	cout << r << "\n";

	system("pause");
}
