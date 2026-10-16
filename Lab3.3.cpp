#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double x, R, y;
	cout << "Введіть значення x: ";
	cin >> x;
	cout << "Введіть значення R: ";
	cin >> R;

	if (x < 0)
		y = -(x / 2);
	else if (x >= 0 && x < R)
		y = R - sqrt(pow(R, 2) - pow(x, 2));
	else if ((x >= R) && (x < 2 * R))
		y = sqrt(pow(R, 2) - pow(x - R, 2));
	else y = ((6 * x) - (12 * R)) / (-1 - (2 * R));

	cout << "y = " << y << endl;

	return 0;
}
