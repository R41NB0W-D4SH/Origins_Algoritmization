#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, c, min, max;

	cout << "Введите три вещественных числа" << endl;
	cin >> a >> b >> c;

	min = a < b ? a : b;
	min = min < c ? min : c;
	max = a > b ? a : b;
	max = max > c ? max : c;

	cout << "Минимальное значение из трех вещественных чисел = " << min << endl;
	cout << "Максимальное значение из трех вещественных чисел  = " << max << endl;

	system("pause");
	return 0;
}
