#include <iostream>

using namespace std;
int main()
{
	setlocale(0, "");
	int amount, sum, umn, n, i;
	cout << "Введите размерность массива" << endl;
	cin >> n;

	amount = 0;
	sum = 0;
	umn = 1;
	int *array = new int[n];

	for (i = 0; i < n; i++)
	{
		cin >> array[i];
		if (array[i] & 2 == 1)
		{
			amount = amount + 1;
			sum = sum + array[i];
			umn = umn * array[i];
		}
	}

	cout << "Сумма равна " << sum << endl << "Произведение равно " << umn << endl << " Количество равно " << amount << endl;

	system("pause");
	return 0;
