#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(0, "");
	int n, i, nx;
	double b, c;

	cout << "Введите целое число N " << endl;
	cin >> n;

	c = 0;
	if (n == 0)
		{
		nx = 0;
		b = 0;
		}
	else
		{
		nx = 1;
		b = 1;
		}
	if (n < 0)
	{
		for (i = -1; i >= n; i--)
		{
			nx = nx * i;
			b = b * (1 + 1 / pow(i, 2));
			c = sqrt(c) + sqrt(2);
		}
	}
	else if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			nx = nx * i;
			b = b * (1 + 1 / pow(i, 2));
			c = sqrt(c) + sqrt(2);
		}
	}

	cout << "2 в степени " << n << " равно " << pow(2, n) << endl;
	cout << "Факториал числа " << n << " равен " << nx << endl;
	cout << "Результат произведения равен " << b << endl;
	cout << "Результат корней равен " << c << endl;

	system("pause");
	return 0;
} 
