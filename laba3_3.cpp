#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(0, "");
	int n,i,nx;

	cout << "Введите целое число N " << endl;
	cin >> n;
	cout << "2 в степени " << n << " равно " << pow(2, n) << endl;

	nx = 1;
	for (i = 1; i <= n; i++)
	{
		nx = nx * i;
	}
	cout << "Факториал числа " << n << " равен " << nx << endl;


	system("pause");
	return 0;
}
