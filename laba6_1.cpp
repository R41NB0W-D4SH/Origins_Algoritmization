#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int i, j, n, min, id_min, cur_el;

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
            min = a[i];
            id_min = i;
            for (j = i + 1; j < n; j++)
            {
                if (a[j] < min)
                {
                    min = a[j];
                    id_min = j;
                }
            }
            cur_el = a[i];
            a[i] = min;
            a[id_min] = cur_el;
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
