#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int i, n, j = 0, b;

	cout << "Введите число B (элементы массива меньше этого числа будут удалены): ";
	cin >> b;

	cout << "Введите размерность массива: ";
	cin >> n;

	if (n > 0)
	{
		cout << endl << "Введите элементы массива." << endl << endl;

		int *a = new int[n];

		for (i = 0; i < n; i++)
		{
			cout <<"a[" << i << "] : ";
			cin >> a[i];
			if (a[i] >= b)
			{
				a[j] = a[i];
				j++;
			}
		}

		cout << endl << "Удаление элементов, не соответствующих условию:" << endl << endl;

		for (i = 0; i < j; i++)
		{
			cout << "a[" << i << "] : " << a[i] << endl;
		}
	}

	cout << endl;

	system("pause");
	return 0;
}
