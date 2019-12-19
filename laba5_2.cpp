#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int i, j, n, max, id_max, cur_el;

	cout << "Ввести число N – порядок квадратной матрицы: ";
	cin >> n;

	if (n > 0)
	{
		cout << endl << "Введите элементы массива" << endl << endl;

		int **a = new int *[n];

		for (i = 0; i < n; i++)
		{
		    a[i] = new int[n];
			for (j = 0; j < n; j++)
			{
				cout << "a[" << i << "][" << j << "] : ";
				cin >> a[i][j];
			}
		}

        max = a[0][0];

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (a[i][j] > max)
				{
                    max = a[i][j];
                    id_max = j;
				}
			}
            cur_el = a[i][i];
            a[i][i] = max;
            a[i][id_max] = cur_el;
		}
		
        cout << endl;

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
	}
	system("pause");
	return 0;
}
