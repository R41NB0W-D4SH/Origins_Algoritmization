#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int i, j, n, cur_el;

	cout << "Введите число N - размер квадратной матрицы: ";
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

        cout << endl << endl;

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }

        for (i = 0; i < n - 1; i++)
        {
            for (j = 0; j < n - 1; j++)
            {
                if (a[j][j] > a[j + 1][j +1 ])
                {
                    cur_el = a[j][j];
                    a[j][j] = a[j + 1][j + 1];
                    a[j + 1][j +1 ] = cur_el;
                }
            }
        }

        cout << endl << "Отсортироанный массив: " << endl << endl;

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                cout <<"[" << i << "][" << j << "] : " << a[i][j] << " ";
            }
            cout << endl;
        }

        cout << endl;
	}
	system("pause");
	return 0;
}
