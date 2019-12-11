include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int i, n, min, max, id_max = 0, id_min = 0;

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

		min = a[0];
		max = a[0];

		for (i = 1; i < n; i++)
		{
			if (max < a[i])
			{
				max = a[i];
				id_max = i;
			}
			else if (min > a[i])
			{
				min = a[i];
				id_min = i;
			}

		}

		cout << endl << "Максимальный и минимальный элементы меняются местами." <<  endl << endl;

		for (i = 0; i < n; i++)
		{
			if (id_min == i) a[i] = max;
			else if (id_max == i) a[i] = min;
			cout << "a[" << i << "] : " << a[i] << endl;
		}

	}

	cout << endl;

	system("pause");
	return 0;
}
