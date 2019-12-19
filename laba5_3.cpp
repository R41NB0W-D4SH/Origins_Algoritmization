#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int i, j, n, m, sum, pr;

	cout << "Ввести размерность матрицы (N x M): ";
	cin >> n >> m;

	if (n > 0 & m > 0)
	{
		cout << endl << "Введите элементы массива" << endl << endl;

		int **a = new int *[n];

		for (i = 0; i < n; i++)
		{
		    a[i] = new int[m];
			for (j = 0; j < m; j++)
			{
				cout << "a[" << i << "][" << j << "] : ";
				cin >> a[i][j];
			}
		}

		for (i = 0; i < n; i++)
		{
		    sum = 0; pr = 1;
			for (j = 0; j < m; j++)
			{
                sum += a[i][j];
                pr *= a[i][j];
			}
			cout << endl << sum << " " << pr;
		}

        cout << endl;
	}
	system("pause");
	return 0;
}
