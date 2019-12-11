#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int i, n, sum, pr, ncount;

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
		}

		ncount = 0;
		sum = 0;
		pr = 1; 

		for (i = 0; i < n; i++)
		{
			if (a[i] % 2 == 1)
			{
				ncount++;
				sum = sum + a[i];
				pr = pr * a[i];
			}
		}

		cout << endl;

		if (ncount < 1)
		{
			cout << "Нечетных чисел в массиве нет." << endl;
		}
		else
		{
			cout << "Сумма нечетных элементов массива: " << sum << endl;
			cout << endl <<  "Произведение нечетных элементов массива: " << pr << endl;
		}
	}

	cout << endl;

	system("pause");
	return 0;
}
