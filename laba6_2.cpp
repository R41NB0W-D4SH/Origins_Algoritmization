#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int i, j, n, cur_el;

	cout << "Введите число N - размерность массива: ";
	cin >> n;

	if (n > 0)
	{
		cout << endl << "Введите элементы массива" << endl << endl;

		int *a = new int [n];

		for (i = 0; i < n; i++)
		{
				cout << "a[" << i << "] : ";
				cin >> a[i];
        }

        for (i = 0; i < n - 1; i++)
        {
            for (j = 0; j < n - 1; j++)
            {
               if (a[j] < a[j + 1])
               {
                   cur_el = a[j];
                   a[j] = a[j + 1];
                   a[j + 1] = cur_el;
               }
            }
        }

        cout << endl << "Отсортироанный массив: " << endl << endl;

        for (i = 0; i < n; i++)
        {
            cout <<"a[" << i << "] : " << a[i] << endl;
        }

        cout << endl;
	}
	system("pause");
	return 0;
}
