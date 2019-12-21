#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int i, j, n, k, sum, pr;

	cout << "Ввести  число N – порядок квадратной матрицы: ";
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

        cout << endl;

        cout << "[1].ПРОИЗВЕДЕНИЕ И КОЛИЧЕСТВО ЭЛЕМЕНТОВ ПОД ГЛАВНОЙ ДИАГОНАЛЬЮ." << endl;
        pr = 1;
        k = 0;
        for (i = 1; i < n; i++)
        {
            for (j = 0; j < i; j++)
            {
                pr *= a[i][j];
                k++;
            }
        }
        cout << "Произведение: " << pr << "  Количество: " << k << endl << endl;

        cout << "[2].СУММА И КОЛИЧЕСТВО ЭЛЕМЕНТОВ НАД ГЛАВНОЙ ДИАГОНАЛЬЮ." << endl;
        sum = 0;
        k = 0;
        for (i = 0; i < n - 1; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                sum += a[i][j];
                k++;
            }
        }
        cout << "Сумма: " << sum << "  Количество: " << k << endl << endl;

        cout << "[3].ПРОИЗВЕДНИЕ И КОЛИЧЕСТВО ПОЛОЖИТЕЛЬНЫХ ЭЛЕМЕНТОВ ПОД ГЛАВНОЙ ДИАГОНАЛЬЮ." << endl;
        pr = 1;
        k = 0;
        for (i = 1; i < n; i++)
        {
            for (j = 0; j < i; j++)
            {
                if (a[i][j] > 0)
                {
                    pr *= a[i][j];
                    k++;
                }
            }
        }
        cout << "Произведение: " << pr << "  Количество: " << k << endl << endl;

        cout << "[4].СУММА И КОЛИЧЕСТВО ОТРИЦАТЕЛЬНЫХ ЭЛЕМЕНТОВ НАД ГЛАВНОЙ ДИАГОНАЛЬЮ." << endl;
        sum = 0;
        k = 0;
        for (i = 0; i < n - 1; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (a[i][j] < 0)
                {
                    sum += a[i][j];
                    k++;
                }
            }
        }
        cout << "Сумма: " << sum << "  Количество: " << k << endl << endl;
	}
	system("pause");
	return 0;
}
