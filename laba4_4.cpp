#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int i, n, ind = 0, min;

	cout << "Введите размерность массива." << endl << endl;
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
		
		for (i = 1; i < n; i++)
		{
			if (a[i] < min)
			{
				min = a[i];
				ind = i;
			}
		}

		if (min < 0)
		{
			min = ~min + 1;
		}
		else if (min > 0)
		{
			min = ~min + 1;
		}

		cout << endl << endl;

		for (i = 0; i < n; i++)
		{
			if (ind == i) a[i] = min;
			cout << "a[" << i << "] : " << a[i] << endl;
		}

		cout << endl << endl;

	}
	
	system("pause");
	return 0;
}
