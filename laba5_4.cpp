#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int i, j, n, m, sum, k;

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

		for (j = 0; j < m; j++)
		{
		    sum = 0;
			for (i = 0; i < n; i++)
			{
                if (a[i][j] > 0) sum += a[i][j];
			}
			cout << sum << " ";
		}

		cout << endl;

        for (j = 0; j < m; j++)
        {
            k = 0;
            for (i = 0; i < n; i++)
            {
                if (a[i][j] > 0) k++;
            }
            cout << k << " ";
        }

        cout << endl;
	}
	system("pause");
	return 0;
}
