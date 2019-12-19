#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int i, j, n, min, id_min1 = 0, id_min2 = 0, max, id_max1 = 0, id_max2 = 0;

	cout << "Ввести число N – порядок квадратной матрицы: ";
	cin >> n;

	if (n > 0)
	{
		cout << endl << "Введите элементы массива" << endl << endl;

		int **a = new int *[n];

		for (i = 0; i < n; i++)
		{
			a[i] = new int[n];
		}
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				cout << "a[" << i << "][" << j << "] : ";
				cin >> a[i][j];
			}
		}

		min = a[0][0];
		max = a[0][0];

		for (i = 1; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (a[i][j] < min)
				{
					min = a[i][j];
					id_min1 = i;
					id_min2 = j;
				}
				if (a[i][j] > max)
				{
					max = a[i][j];
					id_max1 = i;
					id_max2 = j;
				}
			}
		}
		cout << endl << "Минимальный элемент массива: " << min << endl;
		cout << "Индексы минимального элемента массива: [" << id_min1 << "][" << id_min2 << "]" << endl;

		cout << endl << "Максимальный элемент массива: " << max << endl;
		cout << "Индексы максимального элемента массива: [" << id_max1 << "][" << id_max2 << "]" << endl << endl;
	}

	system("pause");
	return 0;
}
